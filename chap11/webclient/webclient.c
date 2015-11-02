#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netdb.h>

void error (char *msg)
{
    fprintf (stderr, "%s: %s\n", msg, strerror(errno));
    exit (1);
}

int open_socket (char *host, char *port)
{
    struct addrinfo *res;
    struct addrinfo hints;
    memset (&hints, 0, sizeof(hints));
    hints.ai_family = PF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    if (getaddrinfo (host, port, &hints, &res) == -1)
	 error ("Can't resolve the ipddress");
    int d_sock = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    if (d_sock == -1)
	error ("can't open the socket");
    int c = connect (d_sock, res->ai_addr, res->ai_addrlen);
    freeaddrinfo(res);
    if (c == -1)
	error ("can't conenct to the socket");
    return d_sock;
}
int say (int socket, char *s)
{
    int result = send (socket, s, strlen(s), 0);
    if (result == -1)
	error ("Error talking to the server");
    return result;
}

int main (int arc, char *argv[])
{
  int d_sock;
  d_sock = open_socket("en.wikipedia.org", "80");
  char buf[255];
  sprintf (buf, "GET /wiki/%s HTTP/1.1\r\n", argv[1]);
  say (d_sock, buf);
  say (d_sock, "HOST: en.wikipedia.org\r\n\r\n");
  char rec[256];
  int bytesRcvd = recv (d_sock, rec, 255, 0);
  while (bytesRcvd) {
    if (bytesRcvd == -1)
      error ("can't read data from server");
    rec[bytesRcvd] = '\0';
    printf("%s", rec);
    bytesRcvd = recv (d_sock, rec, 255, 0);
  }
  close (d_sock);
  return 0;
} 

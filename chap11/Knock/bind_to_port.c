#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include "error.h"

void bind_to_port(int socket, int port)
{
   struct sockaddr_in name;
   name.sin_family = PF_INET;
   name.sin_port = (in_port_t)htons(port);
   name.sin_addr.s_addr = htonl(INADDR_ANY);
   int reuse = 1;
   if (setsockopt (socket, SOL_SOCKET, SO_REUSEADDR, (char *) &reuse, sizeof(int)) == -1)
      error("can't set the reuse option on the socket");
   int c = bind (socket, (struct sockaddr *) &name, sizeof(name)); 
   if (c == -1)
      error("can't bind to the socket");
} 	

#include <stdio.h>
#include <sys/socket.h>
#include "open_socket.h"
#include "error.h"

int open_listener_socket ()
{
    int s = socket(PF_INET, SOCK_STREAM, 0);
    if (s == -1)
	error("cannot open the socket");
    return s;
}

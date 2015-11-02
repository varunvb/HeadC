#include <stdio.h>
#include "say.h"
#include "error.h"
#include <sys/socket.h>
#include <string.h>

int say (int socket, char *s)
{
    int result = send(socket, s, strlen(s), 0);
    if (result == -1)
	error ("cannot send to the socket");
    return result;
}

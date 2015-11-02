#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "handle_shutdown.h"

int listener_d;
void handle_shutdown (int sig)
{
  if (listener_d)
	close (listener_d);
	fprintf (stderr, "Bye!\n");
	exit(0);
}

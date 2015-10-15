#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void godown (int sig) 
{

  puts("goodbye! don't you play with the window again, idiot\n"); 
  exit(1);
}

int catch_signal(int sig, void(*handler)(int)){

   struct sigaction action;
   action.sa_handler = handler;
   sigemptyset(&action.sa_mask);
   action.sa_flags = 0;
   return sigaction (sig, &action, NULL);
}

int main () 
{
    if (catch_signal(SIGWINCH, godown) == -1){
	fprintf(stderr, "can't map the handler");
	exit(2);
     }
     char name[30];
     printf ("enter your name: ");
     fgets(name, 30, stdin);
     printf("Hello %s\n", name);
     return 0;
}

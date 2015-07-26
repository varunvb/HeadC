#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>
void error (char *msg) {
     fprintf(stderr, "%s: %s\n", msg, strerror(errno));
      exit (1);
}
int main (int argc, char *argv[])
{
  char *phrase = argv [1];
  char *vars[] = {"RSS_FEED=http://feeds.popularmechanics.com/pm/science/earth", NULL};
  FILE *f = fopen("stories.txt", "a");
  if (!f) {
     error("can't open stories.txt");
  }
  pid_t pid = fork();
  if (pid == -1) {
      error("couldn't fork the process");
  }
  if (!pid){
      if (dup2(fileno(f), 1) == -1) {
 	   error("cannot redirect to standard output");
      }
      if (execle ("/usr/bin/python", "/usr/bin/python", "./rssgossip.py", phrase, NULL, vars) == -1) {
           error("cannot run the script");
      } 
      int pid_status;
      if (waitpid(pid, &pid_status, 0) == -1) {
          error("Error waiting for child process") ;
      }        
  } 
  return 0;
}

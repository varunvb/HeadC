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
void open_url(char *url) {
     char launch[255];
     sprintf(launch, "open '%s'", url);
     system(launch);
}
int main (int argc, char *argv[])
{
  char *phrase = argv [1];
  char *vars[] = {"RSS_FEED=http://feeds.popularmechanics.com/pm/science/earth", NULL};
  int fd[2];
  if (pipe(fd) == -1){
     error("Can't create a pipe");
  }
  pid_t pid = fork();
  if (pid == -1) {
      error("couldn't fork the process");
  }
  if (!pid){
      
      dup2(fd[1], 1);
      close(fd[0]);
      if (execle ("/usr/bin/python", "/usr/bin/python", "./rssgossip.py", "-u", phrase, NULL, vars) == -1) {
           error("cannot run the script");
      } 
      int pid_status;
      if (waitpid(pid, &pid_status, 0) == -1) {
          error("Error waiting for child process") ;
      }        
  }
  dup2(fd[0], 0);
  close(fd[1]);
  char line[255];
  while (fgets(line, 255, stdin)) {
     if (line[0] == '\t') 
        open_url (line + 1);
  }
  return 0;
}

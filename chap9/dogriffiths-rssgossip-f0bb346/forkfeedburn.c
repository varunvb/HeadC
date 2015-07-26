#include <stdio.h>
#include <unistd.h>
#include <strings.h>
#include <errno.h>

int main (int argc, char *argv[])
{

  char *feeds[] = {"http://feeds.popularmechanics.com/pm/science/earth" 
                    
                   };

 int times = 3;
 char *phrase = argv[1];
 int i;
 for (i = 0; i < times; i++) {
     char var[555];
     sprintf(var, "RSS_FEED=%s", feeds[i]);
     char *vars[] = {var, NULL};
     pid_t pid = fork ();
     if (pid == -1) {
		fprintf(stderr, "can't fork the process: %s\n", strerror(errno));
		return 1;
     }
     if (!pid) {
     if (execle("/usr/bin/python", "/usr/bin/python", "./rssgossip.py", phrase, NULL, vars)== -1){
           fprintf(stderr, "Can't run the script: %s\n", strerror(errno));
 	   return 1;
     }
 }
return 0;
}
}

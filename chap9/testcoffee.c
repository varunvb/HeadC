#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
  char *my_env[] = {"FOOD=donuts", NULL};
  if(execle("./coffee", "./coffee", "donuts", NULL, my_env) == -1) {
    fprintf(stderr, "Can't run the process 0: %s\n", strerror(errno));
    return 1;
  }
}

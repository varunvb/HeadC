#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main (int argc, char *argv[]) 
{
  char *my_env[] = {"JUICE=PEACH and apple", NULL};
  printf ("Diners: %s\n", argv[1]);
  printf ("Juice: %s\n", getenv("JUICE"));
  execle ("/Users/varunvb/HeadC/chap9/diner_info", "/Users/varunvb/HeadC/chap9/diner_info", "4", NULL, my_env);
  return 0;
}

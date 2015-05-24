#include <stdio.h>

typedef struct {
    const char *name;
    const char *species;
    int age;
} turtle;

void happy_birthday (turtle *t)
{

  t->age = t->age + 1;
  
  printf ("Happy Birthday %s! You're now %i years old!\n", t->name, t->age);
}

int main () {

 turtle myrtle = {"Myrtle", "Leather Back Sea turtle", 99};
 happy_birthday (&myrtle);
 printf ("%s is now %i Years old!\n", myrtle.name, myrtle.age);
 return 0;
}

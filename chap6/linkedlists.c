#include <stdio.h>

typedef struct island {
  char *name;
  char *opens;
  char *closes;
  struct island *next;
} island;

island amity = {"Amity", "09:00", "17:00", NULL};
island craggy = {"Craggy", "09:00", "18:00", NULL};
island isla_nublar = {"Shutter", "09:00", "19:00", NULL};
island skull = {"Skull", "09:00", "20:00", NULL};
island shutter = {"Shutter", "09:00", ":21:00", NULL};

void display (island *start) {

  island *i = start;

  for (; i != NULL; i = i->next) {
     printf ("Name: %s\nOpens: %s\ncloses: %s\n", i->name, i->opens, i->closes);
     }
}

int main ()
{
 amity.next = &craggy;
 craggy.next = &isla_nublar;
 isla_nublar.next = &skull;
 skull.next = &shutter;
 display (&amity);
 display (&craggy);
 display (&isla_nublar);
 display (&skull);
 return 0;
}

#include <stdio.h>

struct fish {
  const char *name;
  const char *species;
  int age;
  int teeth;
};
void catalog (struct fish f) {

   printf ("Fish %s is a %s and is %i years old with %i teeth\n", f.name, f.species, f.age, f.teeth);
}
void label (struct fish f) {

   printf ("Fish %s is a %s and is %i years old with %i teeth\n", f . name, f . species, f . age, f . teeth);
}


int main () {

   struct fish snappy = {"snappy", "Piranha", 4, 69};
   catalog (snappy);
   label (snappy);
}

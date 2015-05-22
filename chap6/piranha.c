#include <stdio.h>
#include "label.h" 
#import "label.h"
struct exercise {
   const char *description;
   float duration;

};

typedef struct meal {
   const char *ingredients;
   float weight;
} meal;

typedef struct preferences {
 struct meal food;
 struct exercise exercise;
} preferences;

typedef struct fishy {
  const char *name;
  const char *species;
  int teeth;
  int age;
  preferences care;
} fish;

/* void label (struct fishy f) {

  printf ("Name: %s \n Species: %s \n %i teeth \n %i Years old\n", f.name, f.species, f.teeth, f.age);
  printf ("Feed with %2.2f lbs of %s and allow to %s for %2.2f hours\n", f.care.food.weight, f.care.food.ingredients, f.care.exercise.description, f.care.exercise.duration);
} */

int main () {
fish snappy = {"snappy", "Piranha", 69, 4, {{"meat", 0.2}, {"Swim", 7.5}}};
label (&snappy);
return 0;
}

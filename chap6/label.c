#include <stdio.h>
void label (fish *f) {

  printf ("Name: %s \n Species: %s \n %i teeth \n %i Years old\n", f.name, f.species, f.teeth, f.age);
  printf ("Feed with %2.2f lbs of %s and allow to %s for %2.2f hours\n", f.care.food.weight, f.care.food.ingredients, f.care.exercise.description, f.care.exercise.duration);
}

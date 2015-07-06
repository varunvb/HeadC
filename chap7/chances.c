#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum response_type {DUMP, SECOND_CHANCE, MARRIAGE, NONE};

typedef struct {
   char* name;
   enum response_type type;
} response;

void dump (response r) {
printf ("Dear %s,\n", r.name);
puts ("Unfortunately your last date contacted us to say that they will not be seeing you again");
}

void second_chance (response r){
printf("Dear %s\n", r.name);
puts("Good news: your last date has asked us to");
puts("arrange another meeting. Please call ASAP");
}
void marriage (response r) {
  printf ("Dear  %s\n", r.name);
  puts("Congratulations! Your last date has contacted");
  puts("us with a proposal of marriage");
  printf ("\n");
}
int main () {

  response r [] = {{"Mike", DUMP}, {"Luis", SECOND_CHANCE}, {"Matt", SECOND_CHANCE}, {"William", MARRIAGE}, {"Alex", NONE}};
  int i;
  for (i=0; i <5; i++) {
  switch (r[i].type){
  case DUMP:
    dump (r[i]);
    break;
   case SECOND_CHANCE:
      second_chance(r[i]);
      break;
   case MARRIAGE:     
      marriage (r[i]);
      break;
    default:
       printf ("hang in for updates\n");
       break;
  }
}
return 0;
}

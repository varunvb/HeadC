#include <stdio.h>

typedef union {
   float lemon;
   int lime_pieces;
} lemon_lime;

typedef struct {
  float tequila;
  float cointreau;
  lemon_lime citrus;
} margarita;
 
margarita m = {2.0, 1.0, {2}};
margarita  o = {2.0, 1.0, {0.5}};
margarita n = {2.0, 1.0, {.lime_pieces=1}};

 
int main () {

  printf ("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n", m.tequila, m.cointreau, m.citrus.lemon);
  printf ("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n", o.tequila, o.cointreau, o.citrus.lemon);
  printf ("%2.1f meaures of trquila\n%2.1f measures of cointreau\n%i pieces of lime\n", n.tequila, n.cointreau, n.citrus.lime_pieces);
}

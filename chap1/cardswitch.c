/*
* Program to evaluate face values.
* Released under anarchist licence.
* (c)2015 The black jack man.
*/
#include <stdio.h>
#include <stdlib.h>

int val; 
int main ()
{

  char card_name[3];
  puts ("Enter the card_name: ");
  scanf ("%2s", card_name);
  switch (card_name [0]) {
  case 'K':
  case 'Q':
  case 'J':
      val = 10;
      break;
  case 'A':
    val = 11;
    break;
  default:
     val = atoi(card_name);
 } 

if ((val > 3) && ( val < 7 ))
puts ("Count's gone up!");

/* Otherwise check if the card was 10, J, Q, or K */

else if ((val == 10)|| (val =='J') || (val == 'K') || (val == 'Q') || (val == 'K'))
puts ("Count's gone down");

  return 0;
}


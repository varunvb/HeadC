/*
* Program to evaluate face values.
* Released under anarchist licence.
* (c)2015 The black jack man.
*/
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{

  char card_name[3];
  puts ("Enter the card_name: ");
  scanf ("%2s", card_name);
  int val = 0;
  if (card_name[0] == 'K') {
     val = 10;
  } else if (card_name[0] == 'Q') {
    val = 10;
  } else if (card_name[0] == 'J') {
     val = 11;
  } else {
     val = atoi(card_name);
  }
/* Check if the value is between 3 to 6 */
if (val => 3) && ( val <=6)
puts ("Count's gone up!");

/* Otherwise check if the card was 10, J, Q, or K */

else if (val== '10'|| val =='J' ||val == 'K'||val == 'Q'|| val = 'K')
puts ("Count's gone down");

  return 0;
}
  

#include <stdio.h>
#include "addwithtax.h"

float total = 0.0;
short count = 0;
short tax_percent = 6;

int main ()
{
  float val;
  printf ("price of the item");
  while (scanf("%f", &val) == 1) {
    printf ("Total so far: %2f\n", add_with_tax(val));
    printf ("\nFinal total: %.2f\n", total);
    printf ("Number of the items: %hi\n", count);
    continue;
    return 0;
  }
}

float add_with_tax(float f) 
{ 
  float tax_rate = 1 + tax_percent/100.0;
  fprintf (stdout, "Tax rate is %f\n", tax_rate);
  total = total + (f* tax_rate);
  count = count + 1;
  return total;
}

#include <stdio.h>

int larger (int a, int b) {

    if (a < b)

      return b;
   else 
   return a;
}

int main ()
{
 
 int greatest = larger (100, 100);
   printf ("%i is the greatest!\n", greatest);
   return 0;
}

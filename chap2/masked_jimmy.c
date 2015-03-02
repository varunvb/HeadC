#include <stdio.h>

int main ()
{
 char masked_rider[] = "Alive!";
 char *jimmy = masked_rider;
 printf("Masked rider is %s, Jimmy is %p\n", masked_rider, (void *)&jimmy);
 masked_rider[0] = 'D';
 masked_rider[1] = 'E';
 masked_rider[2] = 'A';
 masked_rider[3] = 'D';
 masked_rider[4] = '!';
 printf ("Masked rider is %s, Jimmy is %s\n", masked_rider, jimmy);
 return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "encrypt.h"
#include "checksum.h"

int main ()
{
   char s[80];
   fgets(s, 80, stdin);
   /* char s[] = "speak friend and enter"; */
   encrypt (s);
   printf("Encrypted to '%s'\n", s);
   printf ("Checksum is %i\n", checksum(s));
   encrypt (s);
   printf("Decrypted Back to '%s'\n", s);
   printf("Checksum is %i\n", checksum(s));
   return 0;
}

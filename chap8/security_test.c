#include <stdio.h>
#include "encrypt.h"
#include "checksum.h"

int main ()
{
   char s[] = "speak friend and enter";
   encrypt (s);
   printf("Encrypted to '%s'\n", s);
   printf ("Checksum is %i\n", checksum(s));
   encrypt (s);
   printf("Decrypted Back to '%s'\n", s);
   printf("Checksum is %i\n", checksum(s));
   return 0;
}

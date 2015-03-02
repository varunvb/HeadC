#include <stdio.h>
#include <string.h>

void fortune_cookie (char msg[])

{

 printf ("Message reads: %s\n", msg);
 printf ("msg occupies %lu bytes\n", sizeof(&msg));
 
}

int main ()

{

char quote[] = "cookies make you fat";
printf ("mes in main has %lu bytes", strlen(quote));
fortune_cookie(quote);
}

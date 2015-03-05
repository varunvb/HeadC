#include <stdio.h>
#include <string.h>

char tracks[] [80] = {
  "Here comes the sun",
  "Saturday blues",
  "Heart attack and vine",
  "The Heart of Satuday Night",
  "Whisky in the Jar"
};

void find_track (char search_for[])
{
 int i;
 for (i=0; i<5; i++) 
 { 
   if (strstr(tracks[i], search_for))
      printf ("Track %i: '%s'\n", i, tracks[i]);
 }
}

int main () 

{

  char search_for[80];
  printf("Search for: ");
  scanf("%79s", search_for);
  /*search_for[strlen(search_for)- 1] = '\0';*/
  find_track(search_for);
  return 0;
}

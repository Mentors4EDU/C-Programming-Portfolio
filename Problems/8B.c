#include <stdio.h>
#define NUMBERS 7		// define numbers
void display (int[NUMBERS]);
int main ()
{
  int channels[NUMBERS] = { 2, 4, 5, 7, 9, 11, 13 };	// elements
  display (channels);		// display
  return 0;
}
void display (int channels[NUMBERS])
{
  int i;
  for (i = 0; i < NUMBERS; i++)
    printf ("Element %d is %d\n", i, *(channels + i));	// print
}


#include <stdio.h>
#define NUMBERS 7
void display (int[NUMBERS]);
int main ()
{
  int channels[NUMBERS] = { 2, 4, 5, 7, 9, 11, 13 }; // elements i.e numbers
  display (channels);
  return 0;
}
void display (int channels[NUMBERS])
{
  int i;			// set logic for elements
  for (i = 0; i < NUMBERS; i++)
    printf ("Element %d is %d\n", i, *(channels + i));	// print
  printf ("\n\nStarted chaning the addresses - Part B\n\n");	// chane the address
  for (i = 0; i < NUMBERS; i++, channels++)
    printf ("Element %d is %d\n", i, *channels);	// call in element display
}

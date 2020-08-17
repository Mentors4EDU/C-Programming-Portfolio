#include <stdio.h>
#include <math.h> // add math lubrary

void liquid (int, int *, int *, int *, int *); // set integers

int
main ()
{
  int num1, gallons, quarts, pints, cups; // define unit variables

  printf ("Enter the number of cups:"); //question
  scanf ("%2d", &num1); //numericals

  liquid (num1, &gallons, &quarts, &pints, &cups); // set logic

  return 0;
}

void
liquid (int x, int *gallons, int *quarts, int *pints, int *cups) // define liquid
{
  static int y;
  y = x;
// enter units
  if (y >= 16)
    {
      *gallons = (y / 16);
      printf ("The number of gallons is %3d\n", *gallons);  // print
    }
  if (y - (*gallons * 16) >= 4)
    {
      *quarts = ((y - (*gallons * 16)) / 4);
      printf ("The number of quarts is %3d\n", *quarts); // print
    }
  if ((y - (*gallons * 16) - (*quarts * 4)) >= 2)
    {
      *pints = ((y - (*gallons * 16) - (*quarts * 4)) / 2);
      printf ("The number of pints is %3d\n", *pints); // print
    }
  if ((y - (*gallons * 16) - (*quarts * 4) - (*pints * 2)) < 2 || y == 0)
    {
      *cups = (y - (*gallons * 16) - (*quarts * 4) - (*pints * 2));
      printf ("The number of cups is %3d\n", *cups); // print
    }
  return;
}

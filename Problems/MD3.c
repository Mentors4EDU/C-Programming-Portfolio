// Kamal, Andrew "Here I am"
#include <stdio.h>

void measure (long *, int *, int *, int *, int *);	// Initialize functions

int
main ()
{
  int inch, feet, yard, mile;	// Set variables
  long inches;
  measure (&inches, &inch, &feet, &yard, &mile);	// Call functions

  printf ("Total value of inches is: %d\n", inches);	// Print
  printf ("Value of inch is: %d\n", inch);
  printf ("Value of feet is: %d\n", feet);
  printf ("Value of yard is: %d\n", yard);
  printf ("Value of mile is: %d\n", mile);

  return 0;
}

void
measure (long *inches, int *inch, int *feet, int *yard, int *mile)	// Measure
{
  *inches = 63360;		// Value logic and match
  *inch = *inches;
  *feet = (*inches) * 0.0833333;
  *yard = (*inches) * 0.0277778;
  *mile = (*inches) * 0.0000158;
}

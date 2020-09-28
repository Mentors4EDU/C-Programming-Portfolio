#include <stdio.h>
int min (int x, int y) // initialize min function
{
  if (x < y) // see if one is larger than the other
    return x;
  else
    return y;
}
int main (void)
{
  int x, y, smallest; // initialize logic
  printf ("Enter the first number\n"); // print message
  scanf ("%d", &x); // scan
  printf ("Enter the second number\n"); // print message
  scanf ("%d", &y); // scan
  smallest = min (x, y); // logic
  printf ("The smaller number is %d\n", smallest); // print message and end
  return 0;
}

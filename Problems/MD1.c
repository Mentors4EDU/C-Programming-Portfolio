// Kamal, Andrew "Here I am"
#include <stdio.h>
#include <conio.h>
int
main ()
{
  float num1, num2, product; // two numerical numbers
  printf ("Enter a number: "); // ask question
  scanf ("%f", &num1); 
  printf ("Enter another number: "); // secondary question logic
  scanf ("%f", &num2);
  product = num1 * num2; // get the product
  printf ("%.3f * %.3f = %.3f\n", num1, num2, product); // print product
  getch ();
  return 0; //run
}

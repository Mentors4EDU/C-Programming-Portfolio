#include<stdio.h>
#include <conio.h>
void subtract (int[], int[], int[]); // set integers
int main ()
{
  int a1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // form arrays
  int a2[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
  int a3[10], i;
  subtract (a1, a2, a3); // call integers
  printf ("Array samples\n"); // print messages
  printf ("first array\n"); // call array
  for (i = 0; i < 10; i++) // integer logic
    printf ("%d ", a1[i]);
  printf ("\n\n");
  printf ("second array\n"); // call array
  for (i = 0; i < 10; i++)
    printf ("%d ", a2[i]);
  printf ("\n\n");
  printf ("third array\n"); // call array
  for (i = 0; i < 10; i++)
    printf ("%d ", a3[i]);
  printf ("\n\n");
  getch (); // getch function
  return 0;
}
void subtract (int a[], int b[], int c[]) 
{
  int i;
  for (i = 0; i < 10; i++)
    c[i] = b[i] - a[i];
}

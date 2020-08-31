#include <iostream>
#include <stdio.h>
using namespace std;
int main (void)
{
  int array[5][5]; // setup array
  int i, j;
  int sum; // call sum
  cout << "enter the 5 x 5 matrix" << endl; // tell user what to do
  for (i = 0; i < 5; ++i)
    for (j = 0; j < 5; ++j) // calculations
      cin >> array[i][j];
  cout << "Here are the row sum calculations:" << endl; // calculations
  for (i = 0; i < 5; ++i)
    {
      sum = 0; // sum
      for (j = 0; j < 5; ++j)
	sum += array[i][j]; // calculations
      cout << "row sum [" << i << "]:" << sum << endl; // call row sum
    }
  cout << "Here are the column sum calculations:" << endl; // here are the column sum
  for (j = 0; j < 5; ++j)
    {
      sum = 0;
      for (i = 0; i < 5; ++i) // calculate again
	sum += array[i][j]; // calculate
      cout << "column sum [" << j << "]:" << sum << endl; // call column sum
    }
  system ("pause");
  return 0; // end program
}

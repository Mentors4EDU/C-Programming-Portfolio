#include<stdio.h>
int main ()
{
  enum
  { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday } week; // enum variable for days of week
  week = 5; // assign variable
  switch (week) // switch case
    {
    case Sunday:
    case Saturday:
      printf ("You can rest today!"); // print message
      break;
    case Monday: // going through cases
    case Wednesday:
    case Tuesday:
    case Thursday:
    case Friday:
      printf ("Go to work!"); // print message
      break;
    default:
      printf ("Not a valid day"); // print message
      break; // break
    }
  return 0; // run
}

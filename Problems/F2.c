#include <stdio.h>
#include <stdlib.h>
void
main ()
{
  struct node // set node structure
  {
    int num;
    struct node *ptr;
  };
  typedef struct node NODE; // define type
  NODE *head, *first, *temp = 0; // node defintions for choise
  int count = 0; // 0 to end
  int choice = 1; // 1 to continue
  first = 0; // end is 0
  while (choice) // set statements
    {
      head = (NODE *) malloc (sizeof (NODE)); // set node head
      printf ("Enter the data item\n"); // print message
      scanf ("%d", &head->num); // scan
      if (first != 0) // if 0
	{
	  temp->ptr = head;
	  temp = head; // head
	}
      else
	{
	  first = temp = head;
	}
      fflush (stdin); //stdin function
      printf ("Do you want to continue(Type 0 or 1)?\n"); // ask if you want to continue
      scanf ("%d", &choice); // scan for choice
    }				/* End of while */
  temp->ptr = 0;
  temp = first;			/* reset temp to the beginning */
  printf ("\nstatus of the linked list is\n");
  while (temp != 0) 
    {
      printf ("%d=>", temp->num);
      count++;
      temp = temp->ptr;
    }
  printf ("NULL\n");
  printf ("No. of nodes in the list = %d\n", count); // print message and end
}				/* End of main */

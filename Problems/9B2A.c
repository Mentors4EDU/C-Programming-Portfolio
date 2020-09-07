#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct ListNode
{
  int value;
  struct ListNode *link;
};
int main () // set list node
{
  struct ListNode *head = NULL;
  struct ListNode *temp, *last;
  struct ListNode *myIterator;
  int i;
  for (i = 0; i < 5; i++) // call 5 items
    {
      temp = malloc (sizeof (struct ListNode)); // set size
      printf ("Enter the num :");
      scanf ("%d", &(temp->value)); // set temp
      temp->link = NULL;
      if (head == NULL)
	{
	  last = head = temp;
	}
      else
	{
	  last->link = temp;
	  last = temp;
	}
    }
  temp = head;
  printf ("Value in list are :");
  while (temp != NULL)
    {
      printf (" %d ", temp->value);
      temp = temp->link;
    }
  printf ("\n");
  temp = malloc (sizeof (struct ListNode));
  printf ("Adding new num in the list , enter num :"); // enter num
  scanf ("%d", &(temp->value));
  temp->link = NULL;
  if (head == NULL)
    {
      last = head = temp;
    }
  else
    {
      last->link = temp;
      last = temp;
    }
  printf ("Value in list after inserts are :");
  temp = head;
  while (temp != NULL)
    {
      printf (" %d ", temp->value); // print
      temp = temp->link;
    }
  printf ("\n");
  printf ("\n");
  system ("pause");
}

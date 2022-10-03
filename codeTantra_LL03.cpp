/******************************************************************************

Program to insert elements in a linked list at anywhere in the list

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct head
{
  int data;
  struct head *next;
};
typedef struct head *NODE;

NODE createNode ()
{
  NODE newNode;
  newNode = (NODE) malloc (sizeof (struct head));
  newNode->next = NULL;
  return newNode;
}

NODE insertAtpos (NODE first, int pos, int x)
{
  NODE n, node;
  node = first;
  n = createNode ();
  n->data = x;

  if (node == NULL && pos == 1)
    {
      first = n;
      return first;
    }

  else
    {
      if (pos == 1)
	{
	  n->next = first;
	  first = n;
	}

      else
	{
	  int i = 2;
	  while (i < pos)	// traverse till position
	    {
	      node = node->next;
	      i++;
	    }

	  // updating the link
	  n->next = node->next;
	  node->next = n;
	}
      return first;
    }
}

void traverseList (NODE first)
{
  NODE x;
  x = first;
  while (x != NULL)
    {
      printf ("%d-->", x->data);
      x = x->next;
    }
  printf ("NULL");
}

int main ()
{
  NODE first;
  first = NULL;
  while (1)
    {
      printf ("\nInsert at position\nEnter the position: ");
      int pos, x;
      scanf ("%d", &pos);
      printf ("Enter the element: ");
      scanf ("%d", &x);

      first = insertAtpos (first, pos, x);
      traverseList (first);
    }
  return 0;
}

#include <iostream>
#include <stdlib.h>
using namespace std;

struct head
{
    int data;
    struct head *next;
};
typedef struct head *NODE;

NODE createNode()
{
    NODE newNode;
    newNode = (NODE)malloc(sizeof(struct head));
    newNode->next = NULL;
    return newNode;
}

NODE insertAtpos (NODE first, int pos, int x)
{
  NODE n, node;
  node = first;
  n = createNode ();
  n->data = x;

  // no. of nodes in a list
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


void
traverseList (NODE first)
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

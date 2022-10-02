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

NODE insertAtpos(NODE first, int pos, int x)
{
    NODE n, node;
    node = first;
    n = createNode();
    n->data = x;

    // no. of nodes in a list
    int count = 0;
    while (node->next != NULL)
    {
        count++;
        node = node->next;
    }

    if (node == NULL && pos == 1)
    {
        first = n;
        return first;
    }

    else
    {
        if (pos == 1)
        {
            n->next = node->next;
            first = n;
        }

        else
        {
            int tempCount = 0;
            while (node != NULL)
            {
                tempCount++;
                if (tempCount == pos)
                {
                    break;
                }
                node = node->next;
            }

            n->next = node->next;
            node->next = n;
        }
        return first;
    }
}
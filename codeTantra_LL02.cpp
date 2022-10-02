#include<iostream>
#include<stdlib.h>
using namespace std;

struct head{
    int data;
    struct head *next;
};
typedef struct head *NODE;

int main()
{  
    NODE first = NULL;
    int x;

    cout<<"Enter elements upto -1 :";
    cin>>x;
    while(x != -1)
    {
        first= addNodes(first,x);
        cin>>x;
    }
    if(first== NULL)
        cout<<"The Single linked list is empty"<<endl;
    else
    {
        cout<<"The Elements in SLL are: ";
        traverseList(first);
    }
    
}
#include<iostream>
#include<stdlib.h>
using namespace std;

struct head{
    int data;
    struct head *next;
};
typedef struct head *NODE;

NODE createNode(){
    NODE newNode;
    newNode = (NODE) malloc(sizeof(struct head));
    newNode->next=NULL;
    return newNode;
}

NODE addNodes(NODE first,int x){
    NODE node,c ;
    
    node=first;
    c=createNode();
    
    if(node==NULL){
        
        first=c;
        first->data=x;
    }
    else{
        
        while(node != NULL){
            node=node->next;
        }
        node->next=c;
        c->data=x;
    }
    return first;
}


void traverseList(NODE first){
    NODE x;
    x=first;
    while(x !=NULL){
        printf("%d-->",x->data);
        x=x->next;
    }
    printf("NULL");
}




int main()
{  
    NODE first = NULL;
    int x;

    cout<<"Enter elements upto -1 :";
    cin>>x;
    while(x != -1)
    {
        first = addNodes(first,x);
        // printf("\n**%d",first->data);
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
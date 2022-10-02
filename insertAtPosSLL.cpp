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

// NODE

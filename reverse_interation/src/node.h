#ifndef NODE_H_
#define NODE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

Node* head;

#endif

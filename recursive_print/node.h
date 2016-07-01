#ifndef NODE_H_
#define NODE_H_

#include <stdio.h>
#include <stdlib.h>

// Object similar to an array, but can be dynamic
typedef struct Node
{
    int data;
    struct Node* next;
} Node;

#endif

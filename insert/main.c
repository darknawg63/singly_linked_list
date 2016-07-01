// linked list: inserting at the n'th position
#include "stdio.h"
#include "stdlib.h"

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

Node* head;

void Insert(int data, int n)
{
    Node* temp1 = malloc(sizeof(Node));
    temp1->data = data;
    temp1->next = NULL;
    
    if(n==1) { // list is empty or has only one node
        temp1->next = head;
        head = temp1;
        return;
    }
    
    Node* temp2 = head;
    // iterate to node n-2. We use n-2 because to the user enters 1 for the first element, not 0.
    for(int i = 0; i < n-2; i+=1) {
        temp2 = temp2->next;
    }
    
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void Print() {
    Node* temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
    printf("\n");
}

int main (int argc, char *argv[])
{
    head = NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    Print();
    
    return 0;
}   

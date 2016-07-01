// mutator.c: functions for manipulating  a linked list
#include "node.h"

// add nodes to the end of the linked list
Node* append(int data) {
    Node* tail = (struct Node*)malloc(sizeof(Node));
    tail->data = data;
    
    if (head == NULL) {
        tail->next = head;
        head = tail;
        
        return;
    }
    
    Node* last = head;
    
    // traverse to the end node
    while (last->next != NULL) {
        last = last->next;    
    } // Traversed to the end node
    
    last->next = tail;
    tail->next = NULL;
    
    return head;
}

Node* reverse(Node* head)
{
    Node *current, *next, *previous;
    current = head;
    previous = NULL;
    
    while (current != NULL) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    
    head = previous;
    
    return head;
}

void print(Node* head) {
    Node* temp = head;
    printf("The list contains: ");
    
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
    printf("\n");
}

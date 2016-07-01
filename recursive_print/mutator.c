#include "node.h"

Node* prepend(Node* head, int data)
{
    Node *temp = malloc(sizeof(Node));
    temp->data = data;
    temp->next = head;
    head = temp;    
    
    return head;    
}

void print(Node* head)
{
    Node* temp = head;
    printf("\nThe list contains ");
    
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
    printf("\n");
}

void reverse_print(Node* head)
{
    // Code
    Node *temp = head;
    
    if (temp == NULL) return;
    
    reverse_print(temp->next);
    printf("%d ", temp->data);
    
}

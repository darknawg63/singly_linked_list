#include "stdio.h"
#include "stdlib.h"

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

Node* head;

void Insert(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    head = temp;
}

void Print() {
    struct Node* temp = head;
    printf("List is: ");
    
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
    printf("\n");
}

void Delete(int n) 
{
    Node* temp1 = head;
    if (n==1) {
        head = temp1->next;
        free(temp1);
        return;
    }
    
    for (int i = 0; i < n-2; i += 1)
    {
        temp1 = temp1->next;
    }   
    
    Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}

int main (int argc, char *argv[])
{
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    Print();
    int n;
    printf("Enter position to delete\n");
    scanf("%d", &n);
    Delete(n);
    Print();
    
    return 0;
}

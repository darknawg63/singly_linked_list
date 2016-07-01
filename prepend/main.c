// Linked list: inserting at the beginning
#include "stdio.h"
#include "stdlib.h"

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
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

int main (int argc, char *argv[])
{
    head = NULL;
    int i,n,x;

    Print();
    printf("How many elements in the list?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i += 1)
    {
        printf("Enter number\n");
        scanf("%d", &x);
        Insert(x);
        Print();
    }
    
    return 0;
}

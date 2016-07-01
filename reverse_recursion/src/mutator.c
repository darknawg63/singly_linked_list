#include "node.h"

Node*
insert(Node* curr, int data)
{
  Node* temp = (struct Node*)malloc(sizeof(Node));
  temp->data = data;
  temp->next = curr;
  curr = temp;

  return curr;
}

int
length(Node* curr)
{
  int i = 0;

  if (curr == NULL)
    return (0);
  while ( curr != NULL)
    {
      curr = curr->next;
      i++;
    }

  return i;
}

Node*
reverse(Node* p)
{
  if (p->next == NULL)
    {
      reversed = p; // Keep track of the address to head 
      return p;
    }
  reverse(p->next);
  Node* q = p->next;
  q->next = p;
  p->next = NULL;
}

void
print(Node* head)
{
  printf("List is: ");

  while(head != NULL)
    {
      printf("%d ", head->data);
      head = head->next;
    }

  printf("\n");
}

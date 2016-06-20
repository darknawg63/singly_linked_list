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

/*
 *My implementation of the reverse function uses a stack which
 *is used in repopulating the data values of the link list
 *instead of reorganizing the ->next links.
 */
Node*
reverse(Node* curr)
{
  Node *head = curr;
  Node *temp = curr;
  int len = length(curr);
  int i = len - 1;
  int* stack;
  stack = (int*) malloc(len * sizeof(int));

  // populate the stack in reverse order
  while (curr != NULL)
    {
      stack[i] = curr->data;
      curr = curr->next;
      i--;
    }

  for ( i = 0; i < len; i++)
    {
      temp->data = stack[i];
      temp = temp->next;
    }

  return head;
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

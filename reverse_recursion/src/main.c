#include "node.h"
#include "mutator.h"


int 
main (void)
{
  head = NULL;
  int i,n,x;

  printf("How many elements in the list?\n");
  scanf("%d", &n);

  for (i = 0; i < n; i += 1)
    {
      printf("Enter number\n");
      scanf("%d", &x);
      head = insert(head, x);
      print(head);
    }

  head = reverse(head);
  printf("Reversed: ");
  print(reversed);

  return (0);
}



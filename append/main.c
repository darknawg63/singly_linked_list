#include "node.h"
#include "mutator.h"

int main (void)
{
    head = NULL;
    int i,n,x;

    printf("How many elements in the list?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i += 1)
    {
        printf("Enter number\n");
        scanf("%d", &x);
        head = append(x);
        print(head);
    }
    
    head = reverse(head);
    printf("\nThe list is now reversed\n");
    print(head);
    
    return 0;
}



#include "mutator.h"


int main (int argc, char* argv[])
{
    Node *head = NULL;
    head = prepend(head, 2);
    head = prepend(head, 4);
    head = prepend(head, 6);
    head = prepend(head, 8);
    print(head);
    reverse_print(head);
    
    return 0;
}



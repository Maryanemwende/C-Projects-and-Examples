#include "main.h"

/**
 * push_operation - insertion of elements into a stack
 * 
*/
void push_operation()
{
    int stack[LIMIT], top, elem;

    if (top == LIMIT - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter the element you wish to insert: ");
        scanf("%d", &elem);
        top++;
        stack[top] = elem;
    }
}
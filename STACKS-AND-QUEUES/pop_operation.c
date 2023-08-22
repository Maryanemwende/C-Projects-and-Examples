#include "main.h"

/**
 * pop - deletes element from a stack
*/
void pop_operation()
{
    int stack[LIMIT], top, element;

    if (top == -1)
    {
        printf("Stack Underflow\n"); /*Stack is empty*/

    }
    else
    {
        element = stack[top];
        printf("Deleted item is %d\n", stack[top]);
        top--;
    }
}
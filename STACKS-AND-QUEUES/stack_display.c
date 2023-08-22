#include "main.h"

/**
 * display - demonstrates how a stack is displayed
*/
void display()
{
    int stack[LIMIT], top, index;

    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else if (top > 0)
    {
        printf("The elements of the stack are: \n");
        for (index = top; index >= 0; index--){
            printf("%d\n", stack[index]);
        }
    }
}
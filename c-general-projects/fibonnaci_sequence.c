#include <stdio.h>

/* Fibonacci sequence is a sequence in which each number is the sum of the two preceding ones*/

/*
main - Entry point
Return: 0(Success)
*/
int main(void)
{
    int fib_n = 0;
    int num1 = 0, num2 = 1;
    int index;
    int length = 0;

    printf("Enter the number of terms: \n");
    scanf("%d", &length);

    printf("The fibonacci sequence: \n");
    
    printf("%d, %d, ", num1, num2);
    
    for (index = 2; index < length; index++)
    {
        fib_n = num1 + num2;
        printf("%d", fib_n);

        num1 = num2;
        num2 = fib_n;

        if (index != (length - 1))
        {
            printf(", ");
        }
        else
        {
            printf("\n");
        }
    }
    return (0);
}
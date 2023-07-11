#include <stdio.h>

int fibonacci(int n);
/*
main - Entry point
Return: 0(Success)
*/
int main(void)
{
    int index, length;

    printf("Enter the number of terms: \n");
    scanf("%d", &length);

    printf("The fibonacci sequence: \n");
    
    for (index = 0; index < length; index++)
    {
        printf("%d", fibonacci(index));
        if (index != (length - 1)){
            printf(", ");
        }
        else{
            printf("\n");
        }
    }
    return (0);
}

/*
fibonacci - computes the fibonacci series
@n: the number whose fibonacci to find
*/
int fibonacci(int n)
{
    if (n > 1){
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
    else if(n == 1){
        return (1);
    }
    else if(n == 0){
        return (0);
    }
    else{
        return (-1);
    }
}
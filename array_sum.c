#include <stdio.h>
#include <stdlib.h>

int sum(int arr[], int len);

/*
Main - the main function
Return: 0(Success)
*/
int main(void)
{
    int array_1[] = {23, 4, 48, 9, 98, 77, 6};
    int array_2[] = {-55, 90, 100};
    int array_3[] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("The sum of array_1 is: %d\n", sum(array_1, 7));
    printf("The sum of array_2 is: %d\n", sum(array_1, 3));
    printf("The sum of array_3 is: %d\n", sum(array_1, 8));

    return (0);
}

/*
sum - function that calculates the sum of elements in an array
@arr: the array
@len: size of the array
Return: the sum of elements
*/
int sum(int arr[], int len)
{
    int addition = 0;
    int index;
    /*len = sizeof(arr[]);*/

    for (index = 0; index < len; index++)
    {
        addition += arr[index];
    }
    return (addition);
}
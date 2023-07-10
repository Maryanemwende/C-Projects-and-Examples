#include <stdio.h>

double average(double array[], int length);

/*
Main - the main function
Return: 0(Success)
*/
int main(void)
{
    double arr1[] = {4.8, 5.0, 25.5, 40.5, 30.54};
    double arr2[] = {20.0, 10.5};
    double arr3[] = {-50.5, 50.5, -20.0, 20.0};

    printf("The average of arr1 is: %.2lf\n", average(arr1, 5));
    printf("The average of arr2 is: %.2lf\n", average(arr1, 2));
    printf("The average of arr3 is: %.2lf\n", average(arr1, 4));

    return (0);
}

/*
average - function that finds the average of elements in an array
@array: the array
@length: length of the array
Return: the average
*/
double average(double array[], int length)
{
    double sum = 0;
    int index;
    double avg = 0;

    for (index = 0; index < length; index++)
    {
        sum += array[index];
    }
    return (sum / length);
}
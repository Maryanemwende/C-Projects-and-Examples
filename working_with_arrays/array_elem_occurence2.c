#include <stdio.h>

/**
 * array_occurence - helper function to count elem occurences
 * @my_array: the array to check
 * @length: length of the array
 * @to_find: the element to be found
 * Return: the total count of occurences
 */
int array_occurence(int *my_array, int length, int to_find)
{
	int count = 0;
	int index;

	for (index = 0; index < length; index++)
	{
		printf("Number %d is at index %d of my array\n", my_array[index], index);
		if (my_array[index] == to_find)
		{
			count++;
			printf("Number %d occurs %d times in my array\n", my_array[index], count);
		}
	}
	return (count);
}

/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int my_array1[] = {4, 0, 1, 1, 6, 3, 2, 5, 1, 8, 1};
	int my_array2[] = {3, 6, 2, 1, 8, 9, 9, 7, 9, 5, 4, 2, 10};

	int count1 = array_occurence(my_array1, 11, 1);
	int count2 = array_occurence(my_array2, 13, 9);

	printf("There are %d 1s in my first array\n", count1);
	printf("There are %d 9s in my second array\n", count2);

	return (0);
}

#include <stdio.h>

/**
 * main - counts number of occurences of an element in an array
 *
 * Return: count of occurences
 */
int main(void)
{
	int my_array[10] = {7, 7, 3, 5, 4, 5, 6, 8, 8};
	int index;
	int array_to_find = 7;
	int count = 0;

	for (index = 0; index < 10; index++)
	{
		printf("The number %d is at index %d in my array\n", my_array[index], index);
		if (my_array[index] == array_to_find)
		{
			count++;
			printf("Number %d occurs %d times in my_array\n", array_to_find, count);
		}
	}
	return (0);
}

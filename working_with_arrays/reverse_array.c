#include <stdio.h>

/**
 * main - reverses order of an array
 * Return: 0 (Success)
 */
int main(void)
{
	int my_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	int index;
	int len = 9;
	
	for (index = (len - 1); index >= 0; index--)
	{
		printf("%d\n", my_array[index]);
	}
	return (0);
}

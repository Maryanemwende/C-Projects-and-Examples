#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char *str);

/**
 * main - the main function
 * Return: 0 (Success)
 */
int main(void)
{
	char *str1 = "racecar";
	char *str2 = "panama";
	char *str3 = "abcdabc";

	if (is_palindrome(str1))
		printf("str1: %s is a palindrome\n", str1);
	else
		printf("str1: %s is not a palindrome\n", str1);
	
	printf("\n");

	if (is_palindrome(str2))
		printf("str2: %s is a palindrome\n", str2);
	else
		printf("str2: %s is not a palindrome\n", str2);

	printf("\n");

	if (is_palindrome(str3))
		printf("str3: %s is a palindrome\n", str3);
	else
		printf("str3: %s is not a palindrome\n", str3);

	return (0);
}

/**
 * is_palindrome - helper function to determine if a string is a palindrome
 * @str: the string to be checked
 * Return: a boolean value, true if a string is a palindrome, false otherwise
 */
bool is_palindrome(char *str)
{
	int index;
	int length = strlen(str);
	int mid = strlen(str) / 2;

	for (index = 0; index < mid; index++)
	{
		if (str[index] != str[length - index - 1])
		{
			return (false);
		}
	}
	return (true);
}

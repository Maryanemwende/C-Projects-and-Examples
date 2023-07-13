#include <stdio.h>
#include <stdbool.h>

bool leap_year(int year);

/*
main - the main function
Return: 0(Success)
*/
int main(void)
{
    int year;

    printf("Enter the year of your choice: \n");
    scanf("%d", &year);

    if (leap_year(year))
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
    return (0);
}
/*
leap_year - function that determines if a year is a leap year or not
@year: the year to be checked
Return: true or false
*/
bool leap_year(int year)
{
    if (year % 4 != 0)
        return (false);
    else if (year % 100 != 0)
        return (true);
    else if (year % 400 != 0)
        return (false);
    else
        return (true);
}
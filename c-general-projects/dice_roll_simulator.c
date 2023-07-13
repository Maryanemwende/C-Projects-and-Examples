#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
main - function that generates dice on roll
Return: 0(Success)
*/
int main(void)
{
    srand(time(NULL)); /*time(NULL) returns the current time*/
    int dice = 5;
    int roll = 0;
    int i;

    for (i = 1; i <= dice; i++)
    {
        roll = rand() % 6 + 1; /*rand produces a number between 0 and RAND_MAX. This expression generates a number guaranteed to be in the range of 0-5 (modulus)*/
        printf("Dice %d : %d\n", i, roll);
    }
    return (0);
}
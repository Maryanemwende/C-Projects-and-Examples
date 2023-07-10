#include <stdio.h>

/*Celsius scale, or centigrade scale, is a temperature scale that is based on the freezing point of water at 0°C and the boiling point of water at 100°C. Fahrenheit scale is a temperature scale that is based on the freezing point of water at 32°F and the boiling point of water at 212°F.*/

/*To convert Celcius to Farenheit: Farenheit = Celcius Temperature * 1.8(or 9 / 5) + 32*/

/*
Main - Entry Point (function to convert celcius to farenheit)
Return: 0(Success)
*/
int main(void)
{
    double Celcius = 0;
    double Farenheit = 0;

    printf("Enter the Celcius Temperature: ");
    scanf("%lf", &Celcius);

    Farenheit = (Celcius * 1.8) + 32;

    printf("The converted temperature : Celcius (%.2lf) -> Farenheit (%.2lf)\n", Celcius,Farenheit);
    return (0);
}
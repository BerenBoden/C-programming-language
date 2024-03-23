#include <stdio.h>

void printFahrenheitToCelsiusReverse();
void printFahrenheitToCelsius();

int main()
{
    // Call the functions from main
    printFahrenheitToCelsiusReverse();
    printFahrenheitToCelsius();
    return 0;
}

void printFahrenheitToCelsiusReverse()
{
    int fahr;
    for (fahr = 300; fahr >= 0; fahr -= 20) // Note the use of -= for decrement
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}

void printFahrenheitToCelsius()
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr += 20) // Note the use of += for increment
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}
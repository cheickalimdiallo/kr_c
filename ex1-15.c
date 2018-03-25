/**
* ex1-15.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* Prints a Celcius to Fahrenheit table using a function.
*/
#include <stdio.h>

float toFahrenheit(float cels)
{
    return ((9.0 / 5.0) * cels) + 32.0;
}

int main(void)
{
    float cels, fahr;
    int upper, step;

    cels = 0;
    upper = 358;
    step = 8;
    
    while (cels <= upper)
    {
        fahr = toFahrenheit(cels);
        printf("%3.0f %6.1f\n", cels, fahr);
        cels += step;
    }
}
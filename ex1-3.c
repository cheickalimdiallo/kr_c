/**
* ex1-3.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* Prints a Fahrenheit-Celsius table.
*/
#include <stdio.h>

int main(void)
{
    float fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 358;
    step = 35;

    fahr = lower;
    printf("Fahrenheit\tCelcius\n");
    while (fahr <= upper)
    {
        cels = (5.0/9.0) * (fahr - 32.0);
        printf("\t%3.0f\t\t%6.1f\n", fahr, cels);
        fahr = fahr + step;
    }
}
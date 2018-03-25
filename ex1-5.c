/**
* ex1-5.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* Prints Fahrenheit-Celsius table in reverse order.
*/
#include <stdio.h>

int main(void)
{
    printf("Fahrenheit\tCelcius\n");
    for (int fahr = 300; fahr >= 0; fahr -= 20)
        printf("%3d\t\t%6.1f\n", fahr, ((5.0 / 9.0) * (fahr - 32.0)));
}
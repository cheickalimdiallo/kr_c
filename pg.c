/**
* pg.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* Playground file.
*/
#include <stdio.h>


int main(void)
{
    int a, b;
    a = 5; 
    b = 8;
    printf("a = %i, b = %i\n\n", a, b);
    
    a = a ^ b;
    printf("a = %i, b = %i\n", a, b);
    b = a ^ b;
    printf("a = %i, b = %i\n", a, b);
    a = a ^ b;
    printf("a = %i, b = %i\n", a, b);
}
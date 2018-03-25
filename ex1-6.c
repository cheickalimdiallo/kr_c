/**
* ex1-6.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* File description
*/
#include <stdio.h>

int main(void)
{
    int c;
    if ((c = getchar()) != EOF)
        printf("Reached !\n");
    else
        printf("Not reached !\n");   
}
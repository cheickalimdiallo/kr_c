/**
* ex1-12.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* A program that prints its input one word per line.
* A word is any sequence of characters that does not contain a blank, a tab or a newline.
*/
#include <stdio.h>

int main(void)
{
    int c;
    
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n')
            putchar(c);
        else
            putchar('\n');
    }
}
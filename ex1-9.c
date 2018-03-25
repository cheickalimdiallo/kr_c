/**
* ex1-9.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* The program copies its input to its output by replacing each string of one or more blanks by a single blank.
*/
#include <stdio.h>

int main(void)
{
    int c, blank_count;

    blank_count = 0;
    while ((c = getchar()) != EOF)
    {
        // Whenever you find a blank, increase the count.
        if (c == ' ')
            ++blank_count;
        else
            blank_count = 0;
        
        // Skip every additional blank.
        if (blank_count > 1)
            continue;
        putchar(c);
    }
}
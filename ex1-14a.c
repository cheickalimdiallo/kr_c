/**
* ex1-14a.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* The program prints a horizontal histogram of the frequencies of different characters (printable) in its input.
*/

#include <stdio.h>

#define NUMBER_OF_PRINTABLE_CHARACTERS 93
#define FIRST_PRINTABLE_CHARACTER 33

int main(void)
{
    // A container for the list of printable characters.
    unsigned short counters[NUMBER_OF_PRINTABLE_CHARACTERS] = {0};

    short c;
    while ((c = getchar()) != EOF)
    {
        // For each character read, check if it is printable.
        if (c >= FIRST_PRINTABLE_CHARACTER && c <= (FIRST_PRINTABLE_CHARACTER + NUMBER_OF_PRINTABLE_CHARACTERS))
        {
            // Increases the corresponding character counter.
            ++counters[c - FIRST_PRINTABLE_CHARACTER];
        }
    }

    // Prints the corresponding histogram.
    for (int i = 0; i < NUMBER_OF_PRINTABLE_CHARACTERS; ++i)
    {
        if (counters[i])
        {
            printf("%c ", i + 33);
            for (int j = 0; j < counters[i]; ++j)
            {
                putchar('#');
            }
            putchar('\n');
        }
    }
    putchar('\n');
}
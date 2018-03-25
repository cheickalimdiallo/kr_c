/**
* ex1-14a.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* The program prints a vertical histogram of the frequencies of different characters (printable) in its input.
*/

#include <stdio.h>

#define NUMBER_OF_PRINTABLE_CHARACTERS 93
#define FIRST_PRINTABLE_CHARACTER 33

int main(void)
{
    // A container for the list of printable characters.
    unsigned short counters[NUMBER_OF_PRINTABLE_CHARACTERS] = {0};
    int highest = 0;

    short c;
    while ((c = getchar()) != EOF)
    {
        // For each character read, check if it is printable.
        if (c >= FIRST_PRINTABLE_CHARACTER && c <= (FIRST_PRINTABLE_CHARACTER + NUMBER_OF_PRINTABLE_CHARACTERS))
        {
            // Increases the corresponding character counter.
            ++counters[c - FIRST_PRINTABLE_CHARACTER];

            highest = (highest < counters[c - FIRST_PRINTABLE_CHARACTER]) ? counters[c - FIRST_PRINTABLE_CHARACTER] : highest;
        }
    }

    // Prints the corresponding histogram.
    for (int i = highest; i > 0; --i)
    {
        for (unsigned short j = 0; j < NUMBER_OF_PRINTABLE_CHARACTERS; ++j)
        {
            if (counters[j])
            {
                if (counters[j] >= i)
                    putchar('#');
                else
                    putchar(' ');
            }
        }
        putchar('\n');
    }
    // Prints the last line with characters themselves.
    for (unsigned short i = 0; i < NUMBER_OF_PRINTABLE_CHARACTERS; ++i)
        if (counters[i])
            putchar(i + FIRST_PRINTABLE_CHARACTER);
    putchar('\n');
}
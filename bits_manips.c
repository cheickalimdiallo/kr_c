/**
* bits_manips.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* Basic bits manipulations with bitwise operators.
*/
#include <stdio.h>

int main(void)
{
    unsigned x = 135;
    int p = 5; // Position.
    int n = 2; // Bit field.

    // Checks value of bit at p.
    x &= 1 << p;

    // Sets bit at p to 1.
    x |= 1 << p;

    // Clearing bit at p.
    x &= ~(1 << p);

    // Flipping bit at p.
    x ^= 1 << p;
}
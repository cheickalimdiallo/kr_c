/**
* ex2-7.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* A function invert(x,p,n) that returns x with the n bits that begin at position p inverted (i.e., 1 changed into 
* 0 and vice versa), leaving the others unchanged.
*/
#include <stdio.h>

unsigned invert(unsigned x, int p, int n)
{
    for (int i = 0; i < n; ++i, --p)
        x ^= (1 << p);
    return x;
}

int main(void)
{
    printf("%u\n", invert(211, 4, 2));
}
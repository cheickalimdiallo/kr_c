/**
* ex2-6.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* A function setbits(x,p,n,y) that returns x with the n bits that begin at position p set to the rightmost n bits of 
* y, leaving the other bits unchanged. 
*/
#include <stdio.h>

/* Gets n bits from position p.*/
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & (~(~0 << n));
}

unsigned setbits(unsigned x, int p, int n, int y)
{
    
}

int main(void)
{
    printf("%u\n", getbits(358, 5, 3));
}
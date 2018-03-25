/**
* ex2-8.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* A function rightrot(x,n) that returns the value of the integer x rotated to the right by n bit positions.
*/
#include <stdio.h>

unsigned rightrot(unsigned x, int n)
{
    return (x << n) | (x >> (-n & 7));
}

int main(void)
{
    printf("%u\n", rightrot(135, 5));
}
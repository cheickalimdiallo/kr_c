/**
* ex2-1.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* A program to determine the ranges of char, short, int, and long variables, both signed and unsigned 
* by printing appropriate values from standard headers and by direct computation.
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    size_t char_size = sizeof(char);
    size_t short_size = sizeof(short);
    size_t int_size = sizeof(int);
    size_t long_size = sizeof(long);

    float char_value = pow(2, char_size * 8);
    float short_value = pow(2, short_size * 8);
    float int_value = pow(2, int_size * 8);
    float long_value = pow(2, long_size * 8);

    printf("Sizes are\n char = %zu bits: from %.2f to %.2f\n short = %zu bits: from %.2f to %.2f\n int = %zu bits: from %.2f to %.2f\n long = %zu bits: from %.2f to %.2f\n"
        , char_size * 8, (char_value/2.0) - 1.0, (char_value/2.0)
        , short_size * 8, (short_value/2.0) - 1.0, (short_value/2.0)
        , int_size* 8, (int_value/2.0) - 1.0, (int_value/2.0)
        , long_size * 8, (long_value/2.0) - 1.0, (long_value/2.0));
}
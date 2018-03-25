/**
* ex2-3.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* The function htoi(s), which converts a string of hexadecimal digits (including an optional Ox or ox) 
* into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.
*/
#include <stdio.h>
#include <ctype.h>

unsigned int htoi(char s[]);

int main(void)
{
    printf("%d\n", htoi("0xa5fd2B"));
}

unsigned int htoi(char s[])
{
    // Handles the 0x, 0X prefix.
    short i;
    if (s[1] == 'x' || s[1] == 'X')
        i = 2;
    else
        i = 0;
    
    unsigned int h = 0;
    for (; (s[i] >= '0' && s[i] <= '9')
        || (s[i] >= 'A' && s[i] <= 'F')
        || (s[i] >= 'a' && s[i] <= 'f'); ++i)
    {
        // 10 is used to shift the current digit to the left, one place.
        if (s[i] >= '0' && s[i] <= '9')
            h = 10 * h + (s[i] - '0');
        else
            // 100 is used to shift the current digit to the left, two places.
            if (isupper(s[i]))
                h = 100 * h + (s[i] - 'A' + 10);
            else
                h = 100 * h + (s[i] - 'a' + 10);

    }

    return h;
}
/**
* ex2-5.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* The function any(s1, s2), which returns the first location in the string s1 where any character from 
* the string s2 occurs, or -1 if s1 contains no characters from s2.
*/
#include <stdio.h>

short any(char s1[], char s2[])
{
    short i, j;

    i = 0;
    while (s2[i] != '\0')
    {
        for (j = 0; s1[j] != '\0'; ++j)
            if (s1[j] == s2[i])
                return j + 1;
        ++i;
    }
    return -1;
}

int main(void)
{
    printf("%d\n", any("cheick", "moussa"));
}
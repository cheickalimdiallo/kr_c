/**
* ex2-2.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* A loop equivalent to for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) without using && or ||.
*/
#include <stdio.h>

#define MAX 1024

int main(void)
{
    int c, i;
    char line[MAX];

    i = 0;
    while ((c = getchar()) != EOF)
    {
        if (c != '\n')
            if (i < MAX - 1)
            {
                line[i] = c;
                ++i;
                continue;
            }
        break;  
    }

    if (c == '\n')
        line[i++] = '\n';
    line[i] = '\0';

    printf("\n%s\n", line);
}
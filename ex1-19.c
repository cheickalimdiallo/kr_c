/**
* ex1-19.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* A program that reverses its input, a line at a time using a function reverse(s) that reverses the character string s.
*/
#include <stdio.h>

#define MAX_STRING_LENGTH 1024

void reverse(char s[]);
short get_line(char l[], short limit);

int main(void)
{
    char line[MAX_STRING_LENGTH];
    short line_length = 0;

    while ((line_length = get_line(line, MAX_STRING_LENGTH)) > 1)
    {
        reverse(line);
        printf("%s\n\n", line);
    }
}

short get_line(char l[], short limit)
{
    short c, i;
    for (i = 0; (c = getchar()) != EOF && i < limit - 1 && c != '\n'; ++i)
        l[i] = c;
    
    if (c == '\n')
        l[i++] = '\n';
    
    l[i] = '\0';

    return i;
}

void reverse(char s[])
{
    char temp[MAX_STRING_LENGTH];

    short i = 0;
    // Copies string in temporary array, up until \0.
    while ((temp[i] = s[i]) != '\0')
        ++i;
    // At \0, record index.
    short j = i;
    // Move to character before \0.
    --j;
    // Copy in reverse order from temporary array into string.
    for (short k = 0; k < i; ++k, --j)
        s[k] = temp[j];
}
/**
* ex1-20.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* A program that replaces tabs in the input with the proper number of blanks to space to the next tab stop. 
* Assume a fixed set of tab stops, say every n columns.
*/
#include <stdio.h>

#define MAX_STRING_LENGTH 1024
#define TAB_STOP_NUMBER 4

void detab(char s[], short n);
short get_line(char l[], short limit);

int main(void)
{
    char line[MAX_STRING_LENGTH];
    short line_length = 0;

    while ((line_length = get_line(line, MAX_STRING_LENGTH)) > 1)
    {
        detab(line, TAB_STOP_NUMBER);
        printf("%s\n", line);
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

void detab(char s[], short n)
{
    char tmp[MAX_STRING_LENGTH];
    short c, i, j, k;

    // Replaces tabs with their equivalent blanks in a temporary array.
    i = j = 0;
    while ((c = s[i]) != '\0')
    {
        if (c == '\t')
        {
            k = 0;
            while (k < n)
            {
                tmp[j] = ' ';
                ++j;
                ++k;
            }
        }
        else
        {
            tmp[j] = c;
            ++j;
        }
        ++i;
    }
    tmp[j] = '\0';
    // Replaces the content of s with that of tmp.
    i = 0;
    while ((s[i] = tmp[i]) != '\0')
        ++i;
    s[i] = '\0';
}
/**
* ex1-21.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* A program that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. 
* Use the same tab stops as for detab.
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 1024
#define TAB_STOP_NUMBER 4

void detab(char s[], short n);
void entab(char s[]);
short get_line(char l[], short limit);

int main(void)
{
    char line[MAX_STRING_LENGTH];
    short line_length = 0;

    while ((line_length = get_line(line, MAX_STRING_LENGTH)) > 1)
    {
        entab(line);
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

void entab(char s[])
{
    char tmp[MAX_STRING_LENGTH];
    short c, i, j, k, l, m, n, p;

    // Replaces strings of blanks with their equivalent tabs and/or strings of blanks in a temporary array.
    i = j = 0;
    while ((c = s[i]) != '\0')
    {
        l = i;
        // Counts the number of blanks m in a string of blanks.
        while (s[l] == ' ')
            ++l;
        m = i - l;

        if (m == TAB_STOP_NUMBER)
        {
            tmp[j] = '\t';
            i = l;
        }
        else if (m > TAB_STOP_NUMBER)
        {
            n = m / TAB_STOP_NUMBER;
            p = abs(m - (n * TAB_STOP_NUMBER));
            while (n > 0)
            {
                tmp[j] = '\t';
                ++j;
                --n;
            }
            while (p > 0)
            {
                tmp[j] = ' ';
                ++j;
                --p;
            }
            i = l;
        }
        else
        {
            tmp[j] = c;
            ++j;
            ++i;
        }
        
    }
    tmp[j] = '\0';
    // Replaces the content of s with that of tmp.
    i = 0;
    while ((s[i] = tmp[i]) != '\0')
        ++i;
    s[i] = '\0';
}
/**
* ex1-22.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* A program to "fold" long input lines into two or more shorter lines after the last non-blank character that 
* occurs before the n-th column of input.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 1024
#define MAX_LINE_LENGTH 32

short get_line(char l[], short limit);
void fold(char in[], short line_length, short max_line_length);

int main(void)
{
    char line[MAX_STRING_LENGTH];
    short line_length = 0;

    while ((line_length = get_line(line, MAX_STRING_LENGTH)) > 1)
    {
        fold(line, line_length, MAX_LINE_LENGTH);
    }
}

short get_line(char l[], short limit)
{
    short c, i;
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        l[i] = c;
    
    if (c == '\n')
        l[i++] = '\n';
    
    l[i] = '\0';

    return i;
}

void fold(char in[], short line_length, short max_line_length)
{
    // Computes the number of lines to break the main line into.
    short number_of_lines = 0;
    if (line_length < max_line_length)
        number_of_lines = 1;
    else
        number_of_lines = ceil((float)line_length / (float)max_line_length);
    
    char out[number_of_lines][max_line_length];

    // Breaks the main line into smaller lines.
    short i, j, k;
    i = k = 0;
    while (i < number_of_lines)
    {
        for (j = 0; j < max_line_length - 1; ++j, ++k)
        {
            if (j == max_line_length - 2 && (in[k] == ' ' || in[k] == '\t'))
                continue;
            else
                out[i][j] = in[k];
        }
        out[i][j] = '\0';
        ++i;
    }

    for (i = 0; i < number_of_lines; ++i)
        printf("%s\n", out[i]);
            
}

/**
* ex1-17.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* The program prints all input lines that are longer than 80 characters.
*/
#include <stdio.h>

#define MAX_LINE_LENGTH 1024
#define THE_LINE_LENGTH 10
#define MAX_NUMBER_OF_LINES 10

int get_line(char line[], int max_length);
void copy_line(char src[], char dest[]);

int main(void)
{
    char lines[MAX_NUMBER_OF_LINES][MAX_LINE_LENGTH];
    char line[MAX_LINE_LENGTH];
    int number_of_lines = 0;
    int line_length = 0;

    // Read every line entered, if its length is longer than 80, save it for printing.
    while ((line_length = get_line(line, MAX_LINE_LENGTH)) > 0 && number_of_lines < MAX_NUMBER_OF_LINES)
        if (line_length > THE_LINE_LENGTH)
            copy_line(line, lines[number_of_lines++]);
    
    // If there are saved lines, print them.
    putchar('\n');
    if (number_of_lines)
        for (short i = 0; i < number_of_lines; i++)
            printf("%s", lines[i]);
    putchar('\n');
}

/* Gets input line and returns line length. */
int get_line(char line[], int max_length)
{
    short c, i;
    // Reads each character supplied to stdin.
    for (i = 0; i < max_length - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    
    // Adds the newline character to line.
    if (c == '\n')
        line[i++] = c;
    
    // Ends the line.
    line[i] = '\0';

    return i;
}

/* Copy the source line into the destination line. */
void copy_line(char src[], char dest[])
{
    short i = 0 ;
    while ((dest[i] = src[i]) != '\0')
        ++i;
}
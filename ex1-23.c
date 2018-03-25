/**
* ex1-23.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* A program to remove all comments from a C program. Don't forget to handle quoted strings and character 
* constants properly. C comments do not nest.
*/
#include <stdio.h>

#define MAX_LINE_LENGTH 3072

short get_line(char input[], short max_length);
void remove_comments(char text[])

int main(int argc, char *argv[])
{
    return 0;
}

short get_line(char input[], short max_length)
{
    short c, i;
    // Gets a character from stdin, checks the character isn't a newline and that we haven't reached the end of a line.
    for (i = 0; (c = getchar()) != EOF && c != '\n' && i < max_length - 1; ++i)
        input[i] = c;
    
    // If the last character is a line, insert it !
    if (c == '\n')
        input[i] = '\n';

    ++i;

    // Terminates the line.
    input[i] = '\0';

    // Returns the number of characters in the line.
    return i;
}
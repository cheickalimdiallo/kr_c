/**
* ex1-13a.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* A program to print a horizontal histogram of the lengths of words in its input.
* A word is any sequence of characters that does not contain a blank, a tab or a newline.
*/
#include <stdio.h>

#define MAX_WORD_COUNT 128

int main(void)
{
    int c, word_count, space_count, lengths[MAX_WORD_COUNT];

    word_count = -1;
    space_count = 1;

    // Reads each character till the end.
    while ((c = getchar()) != EOF)
    {
        /* For each character, check for the end of a word. */
        if (c != ' ' && c != '\t' && c != '\n')
        {
            if (space_count)
            {
                // We have a new word.
                ++word_count;
                lengths[word_count] = 0;
                space_count = 0;
            }
            ++lengths[word_count];
        }
        else 
            ++space_count;
    }

    // Prints number of # equivalent to word length.
    for (int i = 0; i <= word_count; ++i)
    {
        for (int j = 0; j < lengths[i]; ++j)
        {
            putchar('#');
        }
        putchar('\n');
    }
}
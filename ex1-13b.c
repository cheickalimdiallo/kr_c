/**
* ex1-13b.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* A program to print a vertical histogram of the lengths of words in its input.
* A word is any sequence of characters that does not contain a blank, a tab or a newline.
*/
#include <stdio.h>

#define MAX_WORD_COUNT 128

int main(void)
{
    int c, word_count, space_count, highest, lengths[MAX_WORD_COUNT];

    word_count = -1;
    space_count = 1;
    highest = 0;

    // Reads each character till the end.
    while ((c = getchar()) != EOF)
    {
        /* For each character, check for the end of a word. */
        if (c != ' ' && c != '\t' && c != '\n')
        {
            if (space_count)
            {
                // We have a new word.

                // Record the highest length.
                if (word_count > -1 && lengths[word_count] > highest)
                    highest = lengths[word_count];
                
                ++word_count;
                lengths[word_count] = 0;
                space_count = 0;
            }
            ++lengths[word_count];
        }
        else 
            ++space_count;
    }

    // Prints # vertically.
    for (int i = highest; i > 0; --i)
    {
        for (int j = 0; j <= word_count; ++j)
        {
            if (lengths[j] >= i)
                putchar('#');
            else
                putchar(' ');
        }
        putchar('\n');
    }
}
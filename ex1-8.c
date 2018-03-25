/**
* ex1-8.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* The program counts blanks, tabs and newlines from the standard input stream.
*/
#include <stdio.h>

#define BLANK ' '
#define TAB '\t'
#define NEWLINE '\n'

int main(void)
{
    int blanks, tabs, newlines, c;
    blanks = tabs = newlines = 0;

    while ((c = getchar()) != EOF)
    {
        // if (c == BLANK)
        //     ++blanks;
        // if (c == TAB)
        //     ++tabs;
        // if (c == NEWLINE)
        //     ++newlines;

        switch (c)
        {
            case BLANK:
                ++blanks;
                break;
            case TAB:
                ++tabs;
                break;
            case NEWLINE:
                ++newlines;
                break;
        }
    }

    printf("Blanks = %d, tabs = %d, newlines = %d\n", blanks, tabs, newlines);
}
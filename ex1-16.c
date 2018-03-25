/**
* ex1-16.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* Prints the length of arbitrarily long input lines and the length of the text. Revised version of the code in the book,
* exercise 1-16.
*/
#include <stdio.h>
// #define MAXLINE 1024 /* maximum input line size */

int get_line();
// void copy(char to[], char from[]);

/* print longest input line length */
int main(void)
{
    int len;               /* current line length */
    int total_len;         /* total length of the text */
    int max;               /* maximum length seen so far */
    // char line[MAXLINE];    /* current input line */
    // char longest[MAXLINE]; /* longest line saved here */

    max = 0;
    total_len = 0;
    while ((len = get_line()) > 0)
    {
        total_len += len;
        if (len > max)
            max = len;
    }
    if (max > 0) /* there was a line */
        printf("Longest line is %i\nText is %i\n", max, total_len);

    return 0;
}

int get_line()
{
    int c, i;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i);
    
    if (c == '\n')
        ++i;

    return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
// void copy(char to[], char from[])
// {
//     int i;
    
//     i = 0;
//     while ((to[i] = from[i]) != '\0')
//         ++i;
// }
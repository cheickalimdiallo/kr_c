/**
* ex2-4.c
*
* Cheick Ali M. DIALLO
* cheickalimdiallo@gmail.com
*
* An alternate version of squeeze(s1,s2) - refer to the book, that deletes each character in s1 that matches 
* any character in the string s2.
*/
#include <stdio.h>

void squeeze(char s1[], char s2[])
{
    short i, j, k;
    i = 0;
    while (s2[i] != '\0')
    {
        for (j = k = 0; s1[j] != '\0'; ++j)
            if (s1[j] != s2[i])
                s1[k++] = s1[j];
        
        s1[k] = '\0';
        ++i;
    }
}

int main(void)
{
    char a[] = "I am the cloth of Divine Providence. As the cloth, anything is possible for me.";
    squeeze(a, "cloth");
    printf("%s\n", a);
}
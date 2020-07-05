#include<stdio.h>

/**
 *main- prints the alphabet in upper and lower case and
 *        with a line break at the end.
 *Return: exit succesful
 */

int main(void)
{
    int a = 'a';
    int b = 'A';

    for(; a <= 'z'; a++)
        putchar(a);
    for(; b <= 'Z'; b++)
        putchar(b);

    putchar('\n');
}

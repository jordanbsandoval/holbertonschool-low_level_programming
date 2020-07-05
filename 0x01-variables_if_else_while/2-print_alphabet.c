#include<stdio.h>

/**
 *main- print the lowercase alphabet with new line
 *Return: exit succesful
 */

int main(void)
{
    int c = 'a';

    for(; c <= 'z'; c++)
        putchar(c);

    putchar('\n');
}

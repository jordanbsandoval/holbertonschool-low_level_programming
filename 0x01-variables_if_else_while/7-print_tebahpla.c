#include <stdio.h>

/**
 * main - Print the alphabet inversely with a new line.
 *
 * Return: exit successful.
 */

int main(void)
{
    char alm = 'z';

    for(; alm >= 'a'; --alm)
        putchar(alm);

    putchar('\n');

	return (0);
}

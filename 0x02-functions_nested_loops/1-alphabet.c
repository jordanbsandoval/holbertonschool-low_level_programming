#include "holberton.h"
/**
 *print_alphabet- print alphabet lowercase
 *Return: exit succesful
 */

void print_alphabet(void)
{
char c = 97;

for (; c <= 122; c++)
_putchar(c);

_putchar('\n');
}

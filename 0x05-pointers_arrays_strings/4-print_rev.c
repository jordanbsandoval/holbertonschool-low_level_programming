#include "main.h"

/**
 * print_rev- function that prints a string, in reverse, followed by a new line
 * @s: pointer to string
 * Return: print to string in reverse to stdout
 */

void print_rev(char *s)
{
	s += _strlen(s) - 1;

	for (; *s; s--)
		_putchar(*(s));
	_putchar(10);
}

/**
 * _strlen- function that returns the length of a string.
 * @s: pointer to string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s); s++, i++)
		;
	return (i);
}

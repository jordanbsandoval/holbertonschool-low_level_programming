#include "holberton.h"

/**
 *_puts- function that print a string
 *@str: parameter pointer to char
 *
 *Return: print string
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

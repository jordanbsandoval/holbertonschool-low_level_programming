#include "holberton.h"

/**
 *_puts- print an string with pointers
 *@str: parameter to print
 *
 *Return: print string
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar(10);
}

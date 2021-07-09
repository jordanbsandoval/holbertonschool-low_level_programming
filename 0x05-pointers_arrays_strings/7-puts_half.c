#include "holberton.h"

/**
 *puts_half- function that prints half of a string, followed by a new line.
 *@str: parameter pointer to string
 *
 *Return: half of an string
 */

void puts_half(char *str)
{
	char *ptr = str;
	int count = 0;

	while (*str != '\0')
		count++, str++;

	ptr += count /= 2;
	for (; count >= 0; count--)
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}

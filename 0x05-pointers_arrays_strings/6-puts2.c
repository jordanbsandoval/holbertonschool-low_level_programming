#include "holberton.h"

/**
 *puts2- function that print each two characters of an string
 *@str: parameter pointer to string
 *
 *Return: print each two characters of an string
 */

void puts2(char *str)
{
	char *ptr = str;

	while (*str != '\0' && *ptr != '\0')
	{
		_putchar(*ptr);
		ptr += 2;
		++str;
	}
	_putchar('\n');
}

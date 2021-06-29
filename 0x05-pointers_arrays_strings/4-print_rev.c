#include "holberton.h"

/**
 *print_rev- print string to reverse
 *@s: parameter to value
 *
 *Return: string to reverse
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;

	while (i >= 0)
	{
		_putchar(*s--);
		i--;
	}
	_putchar(10);
}

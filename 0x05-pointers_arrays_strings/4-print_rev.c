#include "holberton.h"

/**
 *print_rev- print string in reverse
 *@s: parameter pointer string
 *
 *Return: print string in reverse
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	while (count >= 0)
	{
		_putchar(*s--);
		count--;
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 * print_line - Draws a straight line in the terminal.
 *
 *@n: is the integer value that indicate the number of times
 *	  that the character _ should be printed.
 *
 * Return: Always void (no value)
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

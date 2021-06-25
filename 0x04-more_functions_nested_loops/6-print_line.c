#include "holberton.h"

/**
 *print_line- draws a straight line in the terminal
 *@n: parameter to evalue
 *
 *Return: exit succesfull
 */

void print_line(int n)
{
	int i = 0;

	if (n > i)
	{
		for (; n > i; n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}

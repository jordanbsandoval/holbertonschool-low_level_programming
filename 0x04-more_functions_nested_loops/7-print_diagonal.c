#include "holberton.h"

/**
 *print_diagonal- draws a diagonal line on the terminal
 *@n: parameter to evalue
 *
 *Return: exit succesfull
 */

void print_diagonal(int n)
{
	int i, p, tmp;
	p = 0;

	if (n > p)
	{
		for (; n > p; p++)
		{
			tmp = 1;
			for (i = 0; i < tmp && tmp <= n; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

#include "holberton.h"

/**
 *more_numbers- prints 10 times the numbers, from 0 to 14, followed new line.
 *
 *Return: print the numbers
 */

void more_numbers(void)
{
	int i, j;
	int tmp = 0;
	int tmp2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			tmp = j;
			if (j > 9)
			{
				tmp = j / 10;
				tmp2 = j % 10;
			}
			_putchar(tmp + '0');
			if (j > 9)
				_putchar(tmp2 + '0');
		}
		_putchar('\n');
	}
}

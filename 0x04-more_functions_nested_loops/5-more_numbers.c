#include "main.h"

/**
 *more_numbers- print numbers 0-14 for 10 times
 *
 *Return: number 0-14 x 10 times
 */
void more_numbers(void)
{
	int i, k, n1, n2;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 15; k++)
		{
			n1 = k % 10;
			if (k >= 10)
				n1 = k / 10;
			_putchar(n1 + '0');
			if (k >= 10)
			{
				n2 = k % 10;
				_putchar(n2 + '0');
			}
		}
		_putchar('\n');
	}
}

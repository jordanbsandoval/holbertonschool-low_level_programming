#include "main.h"

/**
 *times_table- imprime la tabla del 9
 *
 *Return: void
 */

void times_table(void)
{
	int i, p;
	int tmp;

	for (i = 0; i < 10; i++)
	{
		for (p = 0; p < 10; p++)
		{
			tmp = i * p;
			if (tmp < 10)
			{
				_putchar(tmp + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((tmp / 10) + '0');
				_putchar((tmp % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 *print_diagonal- imprime una linea diagonal segun el parametro dado.
 *
 *@n: parametro a evaluar
 *
 *Return: print linea diagonal
 */

void print_diagonal(int n)
{
	int i, p;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (p = 0; p < (i + 1); p++)
				if (p != 0)
					_putchar(32);
			_putchar(92);
			_putchar(10);
		}
	}
}

#include "main.h"

/**
 *print_triangle- imprime una linea diagonal segun el parametro dado.
 *
 *@size: parametro a evaluar
 *
 *Return: print linea diagonal
 */

void print_triangle(int size)
{
	int i, j, p;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; i < j; j--)
				if (j != 10)
					_putchar(' ');
			for (p = 0; p < (i + 1); p++)
				if (p != 0)
					_putchar('#');

			_putchar(10);
		}
	}
}

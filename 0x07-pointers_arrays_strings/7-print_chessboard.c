#include "main.h"

/**
 *print_chessboard- imprimiendo un tablero representando un array bidimensional
 *
 *@a: puntero a un array bidimensional
 *
 *Return: imprimo un tablero de ajedrez con los elementos del array bidimen...
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (i < 8)
	{
		int k = 0;

		while (k < 8)
		{
			_putchar(a[i][k]);
			k++;
		}
		_putchar(10);
		i++;
	}
}

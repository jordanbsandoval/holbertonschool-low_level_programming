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
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}

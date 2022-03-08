#include "main.h"

/**
 * print_chessboard- function that prints the chessboard
 * @a: pointer to an array bidimensioanl
 * 
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, p;

	for (i = 0; i < 8; i++)
	{
		for (p = 0; p < 8; p++)
			_putchar(a[i][p]);
		_putchar(10);
	}
	printf("%s\n", *(a + 4));
}

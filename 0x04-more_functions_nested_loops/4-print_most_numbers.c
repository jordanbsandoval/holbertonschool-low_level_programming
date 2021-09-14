#include "main.h"

/**
 *print_most_numbers- imprime los numeros del 0 al 9
 *
 *Return: number 0-9
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		if (i != 2 && i != 4)
			_putchar(i + '0');
	_putchar('\n');
}

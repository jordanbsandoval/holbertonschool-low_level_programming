#include "main.h"

/**
 *print_to_98- imprime todos los numeros naturales hasta el 98
 *
 *@n: parametro inicial
 *
 *Return: always 0.
 */

void print_to_98(int n)
{
	int stop = 98;

	if (n <= stop)
	{
		for (; n <= stop; n++)
		{
			printf("%d", n);
			if (n != stop)
				printf(", ");
			else
				_putchar('\n');
		}
	}
	else
	{
		for (; n >= stop; n--)
		{
			printf("%d", n);
			if (n != stop)
				printf(", ");
			else
				_putchar('\n');
		}
	}
	printf("\n");
}

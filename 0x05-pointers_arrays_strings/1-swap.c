#include "main.h"

/**
 *swap_int- intercambio de valores apuntando a 2 enteros
 *
 *@a: puntero a entero
 *@b: puntero a entero
 *
 *Return: valores intercambiados
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}

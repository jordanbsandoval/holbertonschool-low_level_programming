#include "main.h"

/**
 *print_array- imprime un numero de elementos especifico de un array
 *
 *@a: puntero a un array de enteros
 *@n: numero de elementos a imprimir
 *
 *Return: imprime un determinado numero de elementos
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (a[i] != a[n - 1])
			printf(", ");
	}
	printf("\n");
}

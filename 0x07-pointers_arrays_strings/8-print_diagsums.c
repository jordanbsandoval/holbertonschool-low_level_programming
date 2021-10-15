#include "main.h"

/**
 *print_diagsums- imprimimos la suma en diagonal en x de ambas esquinas
 *
 *@a: puntero a un array de enteros. 1er parametro
 *@size: tamanio de filas del array
 *
 *Return: suma de las esquinas en x diagonalmente
 */

void print_diagsums(int *a, int size)
{
	int i, j, tmp, tmp2;
	int res1 = 0;
	int res2 = 0;

	tmp = 0;
	for (i = 0, j = 1; i < size; i++, j++)
	{
		tmp = size * i;
		tmp2 = size * j;
		res1 += *(a + (tmp + i));
		res2 += *(a + (tmp2 - j));
	}
	printf("%d, %d\n", res1, res2);
}

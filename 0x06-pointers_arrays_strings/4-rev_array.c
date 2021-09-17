#include "main.h"

/**
 *reverse_array- reversa los elementos de un array
 *
 *@a: puntero a un array de punteros
 *@n: numero de elementos en el array
 *
 *Return: imprime el array reversado
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;
	int ult_pos = 0;

	while (n > i)
	{
		ult_pos = n - 1;
		tmp = a[ult_pos];
		a[ult_pos] = a[i];
		a[i] = tmp;
		n--, i++;
	}
}

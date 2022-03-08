#include "main.h"

/**
 * reverse_array- function that reverse an string
 * @a: pointer to array of numbers
 * @n: number of length array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp = 0, i, stop = n - 1;

	for (i = 0; i < stop; i++, stop--)
	{
		tmp = *(a + stop);
		*(a + stop) = *(a + i);
		*(a + i) = tmp;
	}
}

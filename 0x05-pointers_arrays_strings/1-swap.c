#include "main.h"

/**
 * swap_int- function that swaps the values of two integers.
 * @a: pointer to an int
 * @b: pointer to an int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

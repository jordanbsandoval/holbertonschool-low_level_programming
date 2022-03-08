#include "main.h"

/**
 * print_array-
 * @a: pointer to array integers
 * @n: number of elements by print
 * Return: void
 */

void print_array(int *a, int n)
{
	for (; n > 0; n--)
	{
		printf("%d", *(a++));
		if (n != 1)
			printf(", ");
	}
	printf("\n");
}

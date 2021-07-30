#include "holberton.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int res = 0;

	while (i < size)
	{
		res = res + a[i][i];
		i++;
	}
	printf("%d\n", res);
}

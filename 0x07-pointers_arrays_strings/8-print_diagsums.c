#include "main.h"

/**
 *
 *
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j, res = 0, res2 = 0;
	int tmp, tmp2;

	tmp = 0;
	for (i = 0, j = 1; i < size; i++, j++)
	{
		tmp = size * i;
		tmp2 = size * j;
		res += *(a + (tmp + i));
		res2 += *(a + (tmp2 - j));
	}
	printf("%d, %d\n", res, res2);
}

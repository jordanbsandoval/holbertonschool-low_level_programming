#include "holberton.h"

/**
 *
 *
 *
 *
 */

void print_array(int *a, int n)
{
	while (n > 0 && *a != '\0')
	{
		printf("%d, ", *a);
		n--, a++;
	}
	printf("\n");
}

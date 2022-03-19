#include "function_pointers.h"

/**
 *
 *
 *
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, indx = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		indx = cmp(*(array + i));
		if (indx == 1)
			return (i);
		if (i+1 == size && indx == 0)
			return (-1);
	}
	return (indx);
}

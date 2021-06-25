#include "holberton.h"
#include <stdlib.h>

/**
 *_abs- function that computes the absolute value of an integer.
 *Return: 0 to succesfull
 */

int _abs(int n)
{
	int res = abs(n);

	if (n < 0)
		res = n * -1;
	return (res);
}

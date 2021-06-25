#include "holberton.h"
#include <stdlib.h>

/**
 *_abs- function that computes the absolute value of an integer.
 *@n: Parameter to calculate
 *Return: 0 to succesfull
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

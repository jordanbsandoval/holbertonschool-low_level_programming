#include "holberton.h"

/**
 *swap_int- changue the value the two variables with pointer's
 *@a: first parameter
 *@b: second parameter
 *
 *Return: changue value
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}

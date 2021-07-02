#include "holberton.h"

/**
 *swap_int- changue the value between two values
 *@a: first parameter pointer
 *@b: second parameter pointer
 *
 *Return: exit succesfull
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *b;

	*b = *a;
	*a = n;
}

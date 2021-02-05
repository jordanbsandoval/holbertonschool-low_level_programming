#include "sort.h"

/**
 *swap - swaps two integers.
 *@xp: Pointer to the first integer.
 *@yp: Pointer tothe second integer.
 *Return: Nothing.
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}


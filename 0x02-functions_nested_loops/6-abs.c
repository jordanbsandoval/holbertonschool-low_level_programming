#include "main.h"

/**
 *_abs- function that computes the absolute value of an integer.
 *
 *@c: parameter to evaluate
 *
 *Return: value absolute
 */

int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);
}

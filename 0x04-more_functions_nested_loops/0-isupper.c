#include "holberton.h"

/**
 *_isupper- checks for uppercase character
 *@c: parameter to evalue
 *
 *Return: 1 if c is uppercase
 *or 0 othercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

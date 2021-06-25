#include "holberton.h"

/**
 *_isalpha- function that checks for alphabetic character.
 *@c: parameter to value
 *Return: if alphabet 1 o 0 otherwise
 */

int _isalpha(int c)
{
	int i = 65, j = 97;

	if ((c >= i && c <= 90) || (c >= j && c <= 122))
		return (1);
	else
		return (0);
}

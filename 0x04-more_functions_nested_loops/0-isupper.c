#include "main.h"

/**
 *_islower- function that checks for lowercase character.
 *
 *@c: parameter to evaluate
 *
 *Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

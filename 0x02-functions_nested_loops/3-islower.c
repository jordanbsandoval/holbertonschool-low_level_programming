#include "holberton.h"

/**
 *_islower- checks for lowercase character
 *@c: character in decimal
 *Return: 1 if c is lowercase o 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

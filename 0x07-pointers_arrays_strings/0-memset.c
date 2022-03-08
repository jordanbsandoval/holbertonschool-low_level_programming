#include "main.h"

/**
 * _memset- function that fills memory with a constant byte.
 * @s: pointer to string
 * @b: character to replace in the string
 * @n: numbers of bytes that was replace in string
 * Return: pointer to string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++, s++)
		*(s) = b;
	return (s - n);
}

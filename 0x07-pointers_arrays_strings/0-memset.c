#include "holberton.h"

/**
 *_memset- function that fills memory with a constant byte.
 *
 *@s: string to modificate
 *@b: byte constant to store
 *@n: number bytes to used
 *
 *Return: string modificated
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *tmp = s;

	while (n > 0)
	{
		*s++ = b;
		n--;
	}

	return (tmp);
}

#include "holberton.h"

/**
 *_strspn- function that gets the length of a prefix substring.
 *
 *@s: string to evaluate
 *@accept: string from evaluate for coincide
 *
 *Return: number of coincidence
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count, noCount;

	count = 0;
	while (*s)
	{
		noCount = count;

		for (i = 0; accept[i] != '\0'; i++)
			if (*s == accept[i])
				count++;

		if (count != 0 && count == noCount)
			break;
		s++;
	}
	return (count);
}

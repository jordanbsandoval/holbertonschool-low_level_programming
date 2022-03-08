#include "main.h"

/**
 * _strpbrk- function that searches a string for any of a set of bytes.
 * @s: pointer to string
 * @accept: pointer to set of bytes to comparate
 * Return: pointer to char
 */

char *_strpbrk(char *s, char *accept)
{
	int p, i;

	i = 0;
	while (*(s + i) != '\0')
	{
		p = 0;
		while (*(accept + p) != '\0')
		{
			if (*(s + i) == *(accept + p))
				return (s + i);
			p++;
		}
		i++;
	}

	return (NULL);
}

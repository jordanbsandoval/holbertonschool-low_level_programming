#include "main.h"

/**
 * _strspn- function that gets the length of a prefix substring.
 * @s: pointer to string
 * @accept: pointer to string to byte comparate
 * Return: integer unsigned number of byte.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count = 0, p = 0;
	unsigned int len = 0;

	len = _strlen(accept);

	while (*s)
	{
		i = 0;
		p = 0;
		while (*(accept + p) != '\0')
		{
			if (*s != *(accept + p))
				i++;
			else
			{
				count++;
				break;
			}
			if (*s != *(accept + p) && i == len)
				return (count);
			p++;
		}
		s++;
	}
	return (count);
}

/**
 * _strlen- function that returns the length of a string.
 * @s: pointer to string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s); s++, i++)
		;
	return (i);
}

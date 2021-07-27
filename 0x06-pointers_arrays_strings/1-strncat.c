#include "main.h"

int strlenj(char s[]);

/**
 *strlenj- count number elements by array
 *@s: string to count
 *
 *Return: number elements of an array
 */

int strlenj(char s[])
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 *_strncat- concatenate two strings
 *
 *@dest: string to concatenate
 *@src: string from concatenate
 *@n: number characters to concatenate
 *
 *Return: string concatenate
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;

	dest += strlenj(dest);
	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	dest = tmp;
	return (dest);
}

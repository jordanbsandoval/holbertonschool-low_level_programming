#include "holberton.h"

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
 *_strcat- concatena two strings
 *
 *@dest: string to concatenar
 *@src: string from concatenar
 *
 *Return: string concatener
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	dest += strlenj(dest);

	while (*src != '\0')
		*dest++ = *src++;

	return (tmp);
}

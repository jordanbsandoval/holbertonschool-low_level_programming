#include "main.h"

/**
 *strlenj- calculate the number of elements of an array
 *
 *@s: string
 *
 *Return: number of elements of an array
 */

int strlenj(char s[])
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 *_strcat- concatenate two strings
 *
 *@dest: string to concatenate
 *@src: string from concatenate
 *
 *Return: pointer the end of string
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	dest += strlenj(dest);

	while (*src != '\0')
		*dest++ = *src++;

	return (tmp);
}

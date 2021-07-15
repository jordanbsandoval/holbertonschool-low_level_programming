#include "holberton.h"

/**
 *_strncat- function that concatenates two strings
 *@dest: first pointer to string
 *@src: second pointer to string
 *@n: number character to copied
 *
 *Return: pointer to string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;
	int i;

	while (*tmp != '\0')
		tmp++;

	for (i = 0; *src != '\0' && n > i; n--)
		*tmp++ = *src++;

	return (dest);
}

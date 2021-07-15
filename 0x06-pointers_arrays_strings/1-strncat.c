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

	while (*tmp != '\0')
		tmp++;

	while (*src != '\0' && n > 0)
	{
		*tmp = *src;
		tmp++;
		src++;
		--n;
	}
	return (dest);
}

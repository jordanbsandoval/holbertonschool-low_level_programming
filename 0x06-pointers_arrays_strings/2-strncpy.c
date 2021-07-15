#include "holberton.h"

/**
 *_strncpy- function that copies a string
 *
 *@dest: parameter pointer to string destiny
 *@src: paramter pointer to string copy
 *@n: number characters to copied
 *
 *Return: pointer to char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

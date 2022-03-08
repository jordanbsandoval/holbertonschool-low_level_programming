#include "main.h"

/**
 * _strncpy-  function that copies a string.
 * @dest: pointer to string of destiny
 * @src: pointer to string from copy
 * @n: number of bytes to copied
 * Return: pointer to string copied
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *tmp = dest;

	for (i = 0; i < n && *(src) != '\0'; i++)
		*(dest + i) = *(src)++;

	for (; i < n; i++)
		*(dest + i) = '\0';
	return (dest = tmp);
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

#include "main.h"

/**
 * _strncat-  function that copies a string.
 * @dest: pointer to string destiny
 * @src: pointer to string to copy
 * @n: number of bytes to copy
 * Return: pointer to string copied
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = _strlen(dest);

	for (; n > 0 && *(src) != '\0'; i++, n--)
		*(dest + i) = *(src)++;

	return (dest);
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

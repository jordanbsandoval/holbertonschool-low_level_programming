#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	;
	return (x);
}
/**
 * _strncat - function to concatnate strings with n bytes
 *
 * @dest: destination for concatnation
 * @src: source of string
 * @n: int type for size of byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, x;

	dest_len = _strlen(dest);
	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[dest_len + x] = src[x];
	return (dest);
}

/**
 * *str_concat - function to allocate space for sting concatnation
 * @s1: array pointer to destination of string
 * @s2: array pointer to source of string
 * Return: return pointer to copy of string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size1, size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	ptr = malloc(((size1 + size2) + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	_strncat(ptr, s1, size1);
	_strncat(ptr, s2, size2);
	ptr += '\0';
	return (ptr);
}

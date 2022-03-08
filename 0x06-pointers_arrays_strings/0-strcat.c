#include "main.h"

/**
 * _strcat- function that concatenates two strings.
 * @dest: pointer to char to
 * @src: pointer to char from
 * Return: pointer to string concatenate
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	dest += _strlen(dest);
	for (; (*(dest) = *(src)) != '\0'; dest++, src++)
		;

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

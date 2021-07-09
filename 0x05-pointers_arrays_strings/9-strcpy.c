#include "holberton.h"

/**
 *_strcpy- function that copies the string pointed to by src 
 *@dest: parameter to return
 *@src: pointer parameter of string
 *
 *Return: value string
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src != '\0')
		*dest++ = *src++;

	dest = tmp;
	return (dest);
}

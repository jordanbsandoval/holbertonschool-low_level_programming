#include "holberton.h"

/**
 *_strcat- function that concatenates two strings.
 *
 *@dest: first parameter pointer
 *@src: second parameter pointer
 *
 *Return: Return an pointer to char
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	return (tmp);
}

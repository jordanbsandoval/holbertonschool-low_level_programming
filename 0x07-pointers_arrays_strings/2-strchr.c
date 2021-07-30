#include "holberton.h"

/**
 *_strchr- function that locates a character in a string.
 *
 *@s: string to evaluate
 *@c: character to search
 *
 *Return: position of the first ocurrenc
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			break;
		s++;
	}
	return (s);
}

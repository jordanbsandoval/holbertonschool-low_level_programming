#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to evaluate
 * @c: character to be found
 *
 * Return: pointer to first occurrence of the character
 * - return null if nothing is found
 */
char *_strchr(char *s, char c)
{
	if (c == '\0')
		return ('\0');

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (s);
}

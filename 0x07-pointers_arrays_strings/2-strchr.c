#include "main.h"

/**
 * _strchr- function that locates a character in a string.
 * @s: pointer to string for evaluate
 * @c: character to search
 * Return: pointer to string
 */

char *_strchr(char *s, char c)
{
	for (; *(s); s++)
		if (c == *s)
			return (s);
	return (s);
}

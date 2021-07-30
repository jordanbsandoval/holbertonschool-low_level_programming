#include "holberton.h"

/**
 *
 *
 *
 *
 *
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			break;
		s++;
	}
	return (s);
}

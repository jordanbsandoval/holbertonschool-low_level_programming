#include "holberton.h"

/**
 *_strcmp- function that compares two strings
 *
 *@s1: first pointer parameter
 *@s2: second pointer parameter
 *
 *Return: integer result
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 > *s2)
			return (*s1 - *s2);
		else if (*s1 < *s2)
			return (*s1 - *s2);
		else
			return (0);
		s1++;
	}
	return (0);
}

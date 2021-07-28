#include "main.h"

/**
 *_strcmp- Compares two strings
 *
 *@s1: frist parameter to comparate
 *@s2: parameter to compare
 *
 *Return: -15 if the first argument is less
 *	  15 if's greater
 *	  0 if same
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0')
	{
		if (*s1 > *s2)
			return (*s1 - *s2);
		else if (*s1 < *s2)
			return (*s1 - *s2);
		else
			return (i);
		s1++, s2++;
	}
	return (i);
}

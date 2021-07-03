#include "holberton.h"

/**
 *rev_string- reverse string with pointer
 *@s: pointer parameter
 *
 *Return: reverse string
 */

void rev_string(char *s)
{
	char *ptr = s;
	int i;
	char cp[20];

	for (i = 0; *s != '\0'; i++, s++)
		cp[i] = *s;

	s = ptr;
	cp[i] = '\0';
	i--;

	while (i >= 0)
	{
		*s = cp[i--];
		s++;
	}
}

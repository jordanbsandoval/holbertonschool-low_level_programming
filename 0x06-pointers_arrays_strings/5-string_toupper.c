#include "main.h"

/**
 * string_toupper- changes all lowercase letters of a string to uppercase.
 * @s: pointer to string
 * Return: pointer to str
 */

char *string_toupper(char *s)
{
	char *tmm = s;

	while (*(s) != '\0')
	{
		if (*(s) >= 'a' && *(s) <= 'z')
			*(s) = *(s) - 32;
		s++;
	}

	return (s = tmm);
}

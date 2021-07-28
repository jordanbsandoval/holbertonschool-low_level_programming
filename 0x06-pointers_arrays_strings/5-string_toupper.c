#include "main.h"

/**
 *string_toupper- changes all lowercase letters of a string to uppercase.
 *
 *@s: stirng to change
 *
 *Return: pointer to string
 */

char *string_toupper(char *s)
{
	char *tmp = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s = (*s + 'A') - 'a';
		s++;
	}
	return (tmp);
}

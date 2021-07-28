#include "main.h"
/**
 *cap_string- function that capitalizes all words of a string
 *
 *s: string to evaluate
 *
 *Return:
 */

char *cap_string(char *s)
{
	char *ini = s;
	char *tmp = s;

	while (*tmp != '\0' && *s != '\0')
	{
		s++;
		if ((*tmp == ' ' || *tmp == '.' || *tmp == '\t' || *tmp == '\n') && (*s >= 'a' && *s <= 'z'))
			*s = (*s + 'A') - 'a';
		tmp++;
	}
	return (ini);
}

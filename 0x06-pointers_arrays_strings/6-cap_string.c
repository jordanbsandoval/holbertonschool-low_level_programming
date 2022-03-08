#include "main.h"
#define PATTERN(x)  (x == ' ' || x == '\t' || x == '\n' || x == ',' || x == ';' || x == '.' || x == '!' || x == '?' || x == '"' || x == '(' || x == ')' || x == '{' || x == '}')

/**
 * cap_string- function that capitalizes all words of a string.
 * @s: pointer to string
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	char *ptr_tmp = s;
	char tmp;
	while (*(s) != '\0')
	{
		if (PATTERN(tmp) && *(s) >= 'a' && *(s) <= 'z')
			*(s) = *(s) - 32;
		if (*s == '\t')
			*(s) = ' ';
		tmp = *(s);
		s++;
	}

	return (s = ptr_tmp);
}

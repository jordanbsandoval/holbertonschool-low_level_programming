#include "main.h"

/**
 *_strdup- copy of the string given as a parameter
 *
 *@str: string parameter
 *
 *Return: space in memory copy
 */

char *_strdup(char *str)
{
	char *tmp;
	char *tmp2 = str;
	int i, p;

	if (str == NULL)
		return (NULL);

	for (i = 0; *(str + i); ++i)
		;
	str = tmp2;

	tmp = malloc(sizeof(char) * i);

	if (tmp == NULL)
		return (NULL);

	for (p = 0; p <= i; p++)
		*(tmp + p) = *(str + p);

	return (tmp + 0);
}

#include "holberton.h"

/**
 *_strdup- returns a pointer to a newly allocated space in memory, 
 *	   which contains a copy of the string
 *
 *@str: stirng to copy
 *
 *Return: pointer to copy of string
 */
char *_strdup(char *str)
{
	char *tmp = NULL;
	int i, p;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	tmp = malloc(sizeof(char) * i + 1);

	if (tmp == NULL)
		return (NULL);

	for (p = 0; str[p] != '\0'; p++)
		tmp[p] = str[p];

	return (tmp);
}

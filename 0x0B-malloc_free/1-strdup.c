#include "main.h"

/**
 * _strdup- funcion that returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *@str: pointer to string from copy
 *Return: pointer to the new string created
 */

char *_strdup(char *str)
{
	int len_string = _strlen(str);
	int i;
	char *new_str = NULL;

	new_str = malloc(sizeof(char) * len_string);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len_string; i++)
		*(new_str + i) = *(str + i);

	*(new_str + i) = '\0';
	return (new_str);
}

/**
 *_strlen- determina el ancho de un string
 *
 *@s: puntero a un string
 *
 *Return: numer de caracteres del string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

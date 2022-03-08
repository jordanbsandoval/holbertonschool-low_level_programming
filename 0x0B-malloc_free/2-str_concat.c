#include "main.h"

/**
 * str_concat- function that concatenates two strings.
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: pointer to new string created
 */

char *str_concat(char *s1, char *s2)
{
	int len_str1 = _strlen(s1);
	int len_str2 = _strlen(s2);
	int i;
	char *new_str = NULL;

	new_str = malloc(sizeof(char) * ((len_str1 + len_str2) + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len_str1; i++)
		*(new_str + i) = *(s1 + i);

	for (i = 0; i < len_str2; i++)
		*(new_str + (len_str1 + i)) = *(s2 + i);

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

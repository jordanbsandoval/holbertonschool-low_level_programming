#include "main.h"

/**
 *str_concat- concatenates two strings
 *
 *@s1: pointer to string parameter one
 *@s2: pointer to string parameter two
 *
 *Return: string concatenated
 */

char *str_concat(char *s1, char *s2)
{
	char *tmp;
	int ancho_s1, ancho_s2, max, i, p;

	ancho_s1 = _strlen(s1);
	ancho_s2 = _strlen(s2);
	max = (ancho_s1 + ancho_s2) + 1;
	tmp = malloc(sizeof(char) * max);

	if (tmp == NULL)
		return (NULL);

	for (i = 0; i < ancho_s1 ; i++)
		*(tmp + i) = *(s1 + i);

	for (p = 0; i < max; i++, p++)
		*(tmp + i) = *(s2 + p);

	return (tmp + 0);
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
	int i;

	for (i = 0; *(s + i); i++)
		;
	return (i);
}

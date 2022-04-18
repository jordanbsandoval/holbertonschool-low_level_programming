#include "main.h"

/**
 *_strlen- determina el ancho de un string
 *
 *@s: puntero a un string
 *
 *Return: numer de caracteres del string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

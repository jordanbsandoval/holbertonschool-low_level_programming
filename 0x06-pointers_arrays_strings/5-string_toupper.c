#include "main.h"

/**
 *string_toupper- convierte los caracteres minusculas a mayusculas
 *
 *@s: puntero a un array de caracteres
 *
 *Return: puntero del parametro usado en la posicion 0
 */

char *string_toupper(char *s)
{
	char *tmp = s;

	for (; *s != '\0' && *s != '\n'; s++)
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32;

	return (tmp);
}

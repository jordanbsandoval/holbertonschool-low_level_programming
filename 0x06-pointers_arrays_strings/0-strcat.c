#include "main.h"

/**
 *_strcat- concatena dos strings
 *
 *@dest: puntero a un array de caracteres donde se concatenara el string pasado
 *@src: puntero a un array de caracteres que se concatenara al string deseado
 *
 *Return: puntero al string concatenado
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	dest += _strlen(dest);
	while (*src != '\0')
		*dest++ = *src++;
	return (tmp);
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

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}


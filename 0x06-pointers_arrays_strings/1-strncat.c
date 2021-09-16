#include "main.h"

/**
 *_strncat- concatena 2 strings segun el numero de bytes que desee
 *
 *@dest: puntero a un array donde sera almacenado los bytes copiados
 *@src: puntero a un array de caracteres que sera copiado a otro array
 *@n: numero de bytes a copiar
 *
 *Return: puntero al array copiado
 */
char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;

	dest += _strlen(dest);
	while (*(src) != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
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

	for (i = 0; s[i] != '\0'; ++i)
		;

	return (i);
}

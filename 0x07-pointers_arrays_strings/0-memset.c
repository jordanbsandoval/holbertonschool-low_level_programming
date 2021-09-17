#include "main.h"

/**
 *_memset- cambia el valor del parametro apuntado por otro caracter
 *
 *@s: puntero al array de caracteres
 *@b: caracter deseado para cambiar
 *@n: numero de bytes a sobreescribir
 *
 *Return: puntero a la cadena sobreescrita
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *tmp = s;

	for (i = 0; i < n; i++)
		*s++ = b;
	return (tmp);
}

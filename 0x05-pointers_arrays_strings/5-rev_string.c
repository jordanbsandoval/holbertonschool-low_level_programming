#include "main.h"

/**
 *rev_string- reversa un string
 *
 *@s: string a reversar
 *
 *Return: string reversado
 */

void rev_string(char *s)
{
	char tmp;
	int ancho = 0;
	int i;

	ancho = _strlen(s);
	for (i = 0; i <= ancho; i++, ancho--)
	{
		tmp = s[i];
		s[i] = s[ancho - 1];
		s[ancho - 1] = tmp;
	}
}
/**
 *_strlen- numero de elementos de un string
 *
 *@s: string a contar
 *
 *Return: numero de caracteres en el string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

#include "main.h"

/**
 *print_rev- prints a string, in reverse, followed by a new line
 *
 *@s: puntero a char
 *
 *Return: string in reverse
 */

void print_rev(char *s)
{
	int ancho = _strlen(s);

	for (; ancho >= 0; ancho--)
		_putchar(s[ancho]);
	_putchar('\n');
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

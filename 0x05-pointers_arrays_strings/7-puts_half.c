#include "main.h"

/**
 *puts_half- imprime la segunda mitad de un array
 *
 *@str: puntero a un array
 *
 *Return: imprime la segunda mitad
 */

void puts_half(char *str)
{
	int maximo = _strlen(str);
	int half = maximo / 2;

	while (half < maximo)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
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


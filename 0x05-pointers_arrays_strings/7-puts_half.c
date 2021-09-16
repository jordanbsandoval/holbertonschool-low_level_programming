#include "main.h"

/**
 *
 *
 *
 *
 *
 */

void puts_half(char *str)
{
	int maximo = _strlen(str);
	int half = maximo / 2;

	while (half < maximo)
	{
		printf("%c", str[half]);
		half++;
	}
	printf("\n");
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


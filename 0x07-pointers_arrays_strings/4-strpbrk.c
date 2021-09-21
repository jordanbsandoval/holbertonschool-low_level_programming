#include "main.h"
#include <stdio.h>

/**
 *_strpbrk- funcion que busca en una cadena x un conjunto de bytes
 *
 **@s: puntero a un array de caracteres. 1er parametro
 *@accept: puntero a un array de caracteres. 2do parametro
 *
 *Return: Deuelve el string resultante al encontrar la primer coincidencia bits
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int conteo = 0;

		while (accept[conteo])
		{
			if (*s == accept[conteo])
                return (s);
			conteo++;
		}
		s++;
	}
	return (NULL);
}

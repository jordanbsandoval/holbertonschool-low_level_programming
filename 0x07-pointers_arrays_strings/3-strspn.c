#include "main.h"

/**
 *_strspn- función que obtiene la longitud de una subcadena de prefijos.
 *
 *@s: puntero a un array de caracteres. 1er parametro
 *@accept: puntero a un array de caracteres. 2do parametro
 *
 *Return: cantidad de la longitud de la subcadena
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int conteo = 0;

	while (*s)
	{
		int i = 0;
		unsigned int tmp = conteo;

		while (accept[i])
		{
			if (*s == accept[i])
				conteo++;
			i++;
		}
		if (conteo != 0 && conteo == tmp)
			break;
		s++;
	}
	return (conteo);
}

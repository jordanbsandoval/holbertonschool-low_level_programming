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
	unsigned int conteo = 0, i;

	for (; *s != '\0'; s++)
	{
		unsigned int tmp = conteo;

		for (i = 0; *(accept + i) != '\0'; i++)
			if (*s == accept[i])
				conteo++;
		if (conteo != 0 && conteo == tmp)
			break;
	}
	return (conteo);
}

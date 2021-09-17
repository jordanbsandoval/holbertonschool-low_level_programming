#include "main.h"

/**
 *_strcmp- compara dos caracteres y determinando cual es mayor que la otra
 *	   de acuerdo a su codificacion ascii
 *
 *@s1: puntero a char parametro 1
 *@s2: puntero a char parametro 2
 *
 *Return: imprime la resta entre estos dos parametros evaluados en decimal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0')
	{
		if (*s1 < *s2)
			return (*s1 - *s2);
		else if (*s1 > *s2)
			return (*s1 - *s2);
		else
			return (i);
		s1++, s2++;
	}
	return (i);
}

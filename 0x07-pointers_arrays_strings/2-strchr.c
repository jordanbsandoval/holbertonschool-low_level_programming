#include "main.h"

/**
 *_strchr- encuentra la primer ocurrencia e imprime despues de ello
 *
 *@s: puntero a cadena
 *@c: caracter a encontrar en la cadena
 *
 *Return: puntero a subcadena resultante o valor nullo si c no contiene un valo
 */

char *_strchr(char *s, char c)
{
	if (c == '\0')
		return ('\0');
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
}

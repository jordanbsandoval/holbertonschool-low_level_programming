#include "main.h"

/**
 * _strpbrk- busca en una cadena cualquiera de un conjunto de bytes
 *
 * @s: pointer a char to evaluate
 * @accept: pointer a char from string
 * Description:	La función strspn() calcula la longitud (en bytes) del segment
 *		o inicial de s, que está formado en su totalidad por bytes en accept.
 *
 * Return: NULL if no search character
 *	   puntero a la cadena que contiene el conjunto de bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *(s) != '\0'; s++)
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*(s) == *(accept + i))
				return (s);
	return (NULL);
}

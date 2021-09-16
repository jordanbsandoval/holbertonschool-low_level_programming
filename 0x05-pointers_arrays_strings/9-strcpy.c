#include "main.h"

/**
 *_strcpy- funcion que copia los elementos de un array a otro array
 *
 *@dest: puntero a char donde sera copiados los elementos del array deseado
 *@src: puntero a un array de caracteros a copiar
 *
 *Return: puntero al array copiado
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;
	int i;

	for (i = 0; (dest[i] = src[i]) != '\0'; ++i)
		;
	return (tmp);
}

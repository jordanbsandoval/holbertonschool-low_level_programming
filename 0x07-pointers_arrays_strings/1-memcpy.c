#include "main.h"

/**
 *_memcpy- copia determinados caracteres segun los bytes deseados a otro array
 *
 *@dest: puntero a string a copiar
 *@src: puntero al string donde vamos a copiar
 *@n: numero de bytes a copiar
 *
 *Return: puntero al string cambiado
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp = dest;
	unsigned int i;

	for (i = 0; i < n && *src != '\0'; i++)
		dest[i] = *src++;

	return (tmp);
}

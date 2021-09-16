#include "main.h"

/**
 *_strncpy- concatena 2 strings segun el numero de bytes que desee
 *
 *@dest: puntero a un array donde sera almacenado los bytes copiados
 *@src: puntero a un array de caracteres que sera copiado a otro array
 *@n: numero de bytes a copiar
 *
 *Return: puntero al array copiado
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *tmp = dest;

	while (i < n && *src != '\0')
	{
		*dest++ = *src++;
		i++;
		if (*src == '\0')
			*dest = '\0';
	}
	return (tmp);
}

#include "main.h"

/**
 *_puts- imprime lo que esta apuntando en el parametro pasado como argumento
 *
 *@str: parametro apuntado tipo char
 *
 *Return: imprime lo que apunta el parametro
 */

void _puts(char *str)
{
	for (; *str; str++)
		printf("%c", *str);
	printf("\n");
}

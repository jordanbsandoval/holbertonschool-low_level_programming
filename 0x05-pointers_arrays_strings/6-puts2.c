#include "main.h"

/**
 *puts2- imprime un string de 2 en 2 empezando con el primer elemento
 *
 *@str: puntero a un string
 *
 *Return: print array
 */

void puts2(char *str)
{
	for (; *str != '\0'; str += 2)
		_putchar(*str);
	_putchar('\n');

}

#include "main.h"

/**
 * puts2- print every other character of a string, starting with the first char
 * @str: pointer to char
 * Return: void
 */

void puts2(char *str)
{
	for (; *(str); str += 2)
		_putchar(*str);
	_putchar('\n');
}

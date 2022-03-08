#include "main.h"

/**
 * puts_half- function that prints half of a string, followed by a new line.
 * @str: pointer to string
 * Return: void
 */

void puts_half(char *str)
{
	str += _strlen(str) / 2;

	for (; *str; str++)
		_putchar(*str);
	_putchar(10);
}
/**
 * _strlen- function that returns the length of a string.
 * @s: pointer to string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s); s++, i++)
		;
	return (i);
}

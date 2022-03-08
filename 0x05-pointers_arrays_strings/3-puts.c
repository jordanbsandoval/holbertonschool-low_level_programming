#include "main.h"

/**
 * _puts- function that prints a string, followed by a new line, to stdout
 * @str: pointer to string
 * Return: print the string to stdout
 */

void _puts(char *str)
{
	for (; *(str); str++)
		_putchar(*str);
	_putchar('\n');
}

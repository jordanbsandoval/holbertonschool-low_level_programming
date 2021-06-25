#include "holberton.h"

/**
 *print_alphabet- print the alphabet, in lowercase, followed by new line
 *Return: exit succesfull
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}

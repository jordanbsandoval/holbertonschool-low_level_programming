#include "holberton.h"

/**
 * print_last_digit - print last digit of a number
 * @n: value
 *
 * Return: on (success) 1
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;
	r = _abs(r);
	_putchar(r + '0');

	return (r);
}

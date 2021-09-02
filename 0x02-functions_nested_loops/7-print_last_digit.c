#include "main.h"

/**
 *print_last_digit- imprime el ultimo digito de un numero pasado por parametro
 *
 *@n: parameter to evaluate
 *
 *Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last *= -1;
		_putchar(last + '0');
	}
	else
		_putchar(last + '0');
	return (last);
}

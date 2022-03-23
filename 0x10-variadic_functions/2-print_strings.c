#include "variadic_functions.h"

/**
 * print_strings- function that prints strings, followed by a new line.
 * @separator: pointer to char constant for separate words
 * @n: integer unsigned constant. Number of elements from array
 * Return: print to screen number passed with argument to function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(list, char *));
		if (i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(list);
}

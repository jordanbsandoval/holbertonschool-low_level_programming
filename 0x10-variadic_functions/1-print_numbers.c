#include "variadic_functions.h"

/**
 * print_numbers- print number of an array from variadic functions
 * @separator: pointer to char const that separated numbers
 * @n: integer unsigned const
 * Return: print to screen number or nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		unsigned int i = 0;
		va_list list;

		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));
			if (i != (n - 1))
				printf("%s", separator);
		}
		putchar('\n');
		va_end(list);
	}
}

#include "variadic_functions.h"

/**
 * sum_them_all- function that returns the sum of all its parameters.
 * @n: number of parameters to the function
 * @...: an list predeterminaded of arguments
 * Return: number of the sum of all arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	unsigned int i = 0;
	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);

	while (i < n)
	{
		res += va_arg(list, unsigned int);
		i++;
	}
	va_end(list);
	return (res);
}

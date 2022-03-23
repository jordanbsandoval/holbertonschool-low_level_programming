#include "variadic_functions.h"

/**
 * print_c- print argument type char
 * @list: argument to print
 *
 * Return: print to screen argument
 */
void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_e- print argument type int
 * @list: argument to print
 *
 * Return: print to screen argument
 */
void print_e(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_f- print argument type float
 * @list: argument to print
 *
 * Return: print to screen argument
 */
void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_s- print argument type string
 * @list: argument to print
 *
 * Return: print to screen argument
 */

void print_s(va_list list)
{
	char *ptr = va_arg(list, char *);
	if (ptr == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ptr);
}

void print_all(const char * const format, ...)
{
	va_list list;
	
	formato formato[] = {
		{"c", print_c},
		{"i", print_e},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	int i = 0, j;
	char *separate = "";

	va_start(list, format);

	while (format && *(format + i))
	{
		j = 0;
		while (formato[j].op != NULL)
		{
			if (*(formato[j].op) == *(format + i))
			{
				printf("%s", separate);
				formato[j].f(list);
				separate = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}

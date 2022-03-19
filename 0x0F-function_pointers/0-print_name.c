#include "function_pointers.h"

/**
 * print_name- function that prints a name.
 * @name: pointer to char
 * @f: pointer to function that receive an pointer to char
 * Return: print name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

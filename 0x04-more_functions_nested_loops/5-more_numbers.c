#include "holberton.h"

/**
 *more_numbers - Prints 10 times the numbers, from 0 to 14
 *				  followed by a new line.
 *
 *Return: Always void (no value)
 *
 */
void more_numbers(void)
{
/*	int i;*/
	int j;

	for (j = 0; j <= 9; j++)
	{
        _putchar(j + '0');
    }
	
    _putchar('\n');
}

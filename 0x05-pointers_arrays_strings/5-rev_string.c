#include "main.h"

/**
 * rev_string- Write a function that reverses a string.
 * @s: pointer to string
 * Return: string to reverse
 */

void rev_string(char *s)
{
	char *tmp = s;
	char car_tmp;

	tmp += _strlen(s) - 1;

	for (; *s != *tmp; s++, tmp--)
	{
		car_tmp = *(s);
		*(s) = *(tmp);
		*(tmp) = car_tmp;
	}
}

/**
 * _strlen- function that returns the length of a string.
 * @s: pointer to string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s); s++, i++)
		;
	return (i);
}

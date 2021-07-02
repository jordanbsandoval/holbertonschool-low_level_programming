#include "holberton.h"

/**
 *_strlen- function that return the length of a string
 *@s: parameter pointer to value
 *
 *Return: number the characters in pointer
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s++)
		count++;

	return (count);
}

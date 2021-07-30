#include "holberton.h"

/**
 *_memcpy- function that copies memory area.
 *
 *@dest: position of the array to changue of value
 *@src: value to input in the array
 *n: number of bytes to copy
 *
 *Return: pointer to init of array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp = dest;

	while (n-- > 0)
		*dest++ = *src++;

	return (tmp);
}

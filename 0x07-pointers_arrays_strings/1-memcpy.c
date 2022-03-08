#include "main.h"

/**
 * _memcpy- function copies n bytes from memory area src to memory area dest
 * @dest: pointer to string of destiny
 * @src: pointer from string to copy
 * @n: number of bytes to copied
 * Return: pointer to string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n > 0; n--, dest++, src++)
		*(dest) = *(src);
	return (dest - n);
}

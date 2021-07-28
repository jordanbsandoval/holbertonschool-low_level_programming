#include "main.h"

/**
 *_strncpy- copy an string
 *
 *@dest: string to copy
 *@src: string from copy
 *@n: number bytes to copied
 *
 *Return: pointer init
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = dest;

	while (*src != '\0' && n > 0)
	{
		*tmp++ = *src++;
		n--;
	}
	if (*src == '\0')
		*tmp = '\0';
	return (dest);
}

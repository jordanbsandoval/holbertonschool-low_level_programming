#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array- creates array of char and initializes it with a specific char.
 *
 *@size: number of space reserved in memory
 *@c: character to save
 *
 *Return: pointer to array of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *tmp;

	if (size == 0)
		return (NULL);
	else
		tmp = malloc(sizeof(char) * size);

	while (i < size)
	{
		tmp[i] = c;
		i++;
	}
	*tmp = '\0';
	return (tmp);
}

#include "holberton.h"

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
	char *tmp = NULL;

	if (size == 0)
		return (0);

	tmp = malloc(sizeof(char) * size);

	if (tmp == NULL)
		return (NULL);

	while (i < size)
	{
		tmp[i] = c;
		i++;
	}

	return (tmp);
}

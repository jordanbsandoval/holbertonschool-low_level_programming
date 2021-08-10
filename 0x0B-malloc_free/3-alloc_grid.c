#include "holberton.h"

/**
 *alloc_grid- return an pointer to an array dimensional of integers
 *
 *@width: columns
 *@height: row
 *
 *Return: allocated memory
 */

int **alloc_grid(int width, int height)
{
	int **tmp = NULL;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	tmp = malloc(sizeof(int) * height);

	if (tmp == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tmp[i] = malloc(sizeof(int) * width);

		if (tmp == NULL)
		{
			for (j = 0; j < i; j++)
				free(tmp[j]);
			free(tmp);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			tmp[i][j] = 0;
	}

	return (tmp);
}

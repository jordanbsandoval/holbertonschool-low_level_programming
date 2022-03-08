#include "main.h"

/**
 *alloc_grid- function that returns a pointer to a dimensional array of integer
 *@width: number of arrow for the array bidimenssionl
 *@height: number of column for the array bidimenssionl
 *Return: array bidimensional
 */

int **alloc_grid(int width, int height)
{
	int **array_bid = NULL;
	int i, p;

	if ((width && height) < 1)
		return (NULL);

	array_bid = malloc(sizeof(int) * height);

	if (array_bid == NULL)
		return (NULL);
	
	for (i = 0; i < height; i++)
	{
		array_bid[i] = malloc(sizeof(int) * width);

		if (array_bid[i] == NULL)
		{
			for (p = 0; p < i; p++)
				free(array_bid[p]);
			free(array_bid);
			return (NULL);
		}

		for (p = 0; p < width; p++)
			array_bid[i][p] = 0;
	}

	return (array_bid);
}

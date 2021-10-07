#include "main.h"

/**
 *alloc_grid- create array 2D of integers
 *
 *@width: rows of array 2D
 *@height: colums of array 2D
 *
 *Return: create array 2D with pointer
 */
int **alloc_grid(int width, int height)
{
	int **tmp;
	int i, p;

	/* allocate memory to create colums */
	tmp = malloc(sizeof(int) * height);

	/* condition to fail to allocate malloc*/
	if (tmp == NULL)
		return (NULL);

	/* allocate memory to create row in each colum*/
	for (i = 0; i < height; i++)
	{
		tmp[i] = malloc(sizeof(int) * width);

		/*check if allocated memory is done*/
		if (tmp[i] == NULL)
		{
			for (p = 0; p < i; p++)
				free(tmp[p]);
			free(tmp);
			return (NULL);
		}

		/* initialize with zero*/
		for (p = 0; p < width; p++)
			tmp[i][p] = 0;
	}
	return (tmp);
}

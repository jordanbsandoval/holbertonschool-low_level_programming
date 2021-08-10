#include "holberton.h"

/**
 *free_grid- free memory allocated in an array dimensional
 *
 *@grid: memory allocated recently created
 *@height: number of row's
 *
 *Return: free memory allocated
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height < 1)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

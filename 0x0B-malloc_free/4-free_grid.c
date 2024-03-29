#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory of 2D grid.
 * @grid: 2d grid.
 * @height: column dimension of grid.
 * Description: frees memory of grid.
 * Return: nothing.
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}

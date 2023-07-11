#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free grid
 * @height: - the rows number
 * @grid: pointer to pointer of 2d array
 */

void free_grid(int **grid, int height)
{

	int z;

	for (z = 0; z < height; z++)
	{
		free(grid[z]);
	}
	free(grid);
}

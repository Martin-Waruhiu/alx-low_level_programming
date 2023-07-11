#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function to a 2d array
 * @width: - colums
 * @height: - rows
 * Return: pointer to a 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	int *ptr;

	int **greed;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/*allocation memory for each array pointer  that points to the grid*/
	greed = (int **)malloc(height * sizeof(int *));
	if (greed == NULL)
	{
		return (NULL);
	}
	/*allocatin memory for each element*/
	ptr = (int *)malloc(width * height * sizeof(int));
	if (ptr == NULL)
	{
		free(greed);
		return (NULL);
	}
	/**
	 * assigning the pointers in grid to their specific place
	 * each row in the arrray
	 */
	for (i = 0; i < height; i++)
	{
		greed[i] = ptr + (i * width);

		/*initialise each value to zero*/
		for (j = 0; j < width; j++)
		{
			greed[i][j] = 0;
		}
	}
	free(ptr);
	return (greed);
	return (0);
}

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
	int i;

	int j;

	int *ptr;

	int **greed;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}


	greed = (int **)malloc(height * sizeof(int *));


	if (greed == NULL)
	{
		return (NULL);
	}

	ptr = (int *)malloc(width * height * sizeof(int));

	if (ptr == NULL)
	{
		free(greed);
		return (NULL);
	}
	
	for (i = 0; i < height; i++)
	{
		greed[i] = ptr + (i * width);

		/*initialise each value to zero*/
		for (j = 0; j < width; j++)
		{
		
			greed[i][j] = 0;
		}
		return (greed);
	}
	return (0);
}

#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function to allocate memory for array
 * @min: minmum value
 * @max: maximum value
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *ptr;

	int i;

	int elements;

	if (min > max)
	{
		return (NULL);
	}
	elements = (max - min) + 1;

	ptr = malloc(elements * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}

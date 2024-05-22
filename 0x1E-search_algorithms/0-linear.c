#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - linear h algorithm
 * @array: array of int
 * @size: size of arrayy
 * @value: value to searcch for
 * Return: position or -1 if not found
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1); /* Return -1 if the array is NULL */

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}

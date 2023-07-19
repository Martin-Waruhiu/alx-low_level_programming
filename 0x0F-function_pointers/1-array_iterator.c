#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function to perform function task
 * @array: - elements to be tasked
 * @size: size of array
 * @action: points to function
 */


void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int z;

	for (z = 0; z < size; z++)
	{
		(*action)(array[z]);
	}
	_putchar('\n');
}

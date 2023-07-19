#include "function_pointers.h"

/**
 * int_index - func to look int
 * @array: array of elemnts
 * @size: size of array
 * @cmp: pointer to func that searches for int
 * Return: 0 success -1 no success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	int store_return;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (s = 0; s  < size; s++)
	{
		store_return = (*cmp)(array[s]);
		if (store_return != 0)
		{
		return (s);
		}
	}
	return (-1);
	_putchar('\n');
}


#include "main.h"

/**
 * clear_bit - changes bit to 0
 * @n: ptrr
 * @index: index
 *
 * Return: 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

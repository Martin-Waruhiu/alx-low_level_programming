#include "main.h"

/**
 * set_bit - setss bitt
 * @n: ptrr to number
 * @index: inndx
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

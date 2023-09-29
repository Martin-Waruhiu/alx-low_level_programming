#include "main.h"

/**
 * clear_bit - setsvalue of a given bit to 0
 * @n: pointer to tber to change
 * @index: index ofit to clear
 *
 * Return: 1 for sue
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

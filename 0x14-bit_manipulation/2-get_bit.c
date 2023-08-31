#include "main.h"

/**
 * get_bit - gets value of  bit at a certain  i dex
 * @n: the numm
 * @index: index 
 *
 * Return: the bit vall
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int type_bit;

	if (index > 63)
		return (-1);

	type_bit = (n >> index) & 1;

	return (type_bit);
}

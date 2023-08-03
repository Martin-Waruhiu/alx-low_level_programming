#include "main.h"

/**
 * get_bit -  func to get bit
 * @n: intger
 * @index: indexing
 * Return: bits
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitsz;

	if (index > 63)
	{
		return (-1);
	}
	bitsz = (n  >> index) & 1;

	return (bitsz);
}

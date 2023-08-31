#include "main.h"

/**
 * flip_bits - number
 * @n: 1st num
 * @m: 2ndd num
 * Return: bt s to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int xy, len = 0;
	unsigned long int now;
	unsigned long int out = n ^ m;

	for (xy = 63; xy >= 0; xy--)
	{
		now = out >> xy;
		if (now & 1)
			len++;
	}

	return (len);
}

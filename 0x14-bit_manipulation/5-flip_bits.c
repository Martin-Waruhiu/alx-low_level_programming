#include "main.h"


/**
 * flip_bits - func to flip bittsz
 * @n: integer
 * @m: integer
 * Return: counetr
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, counterr = 0;
	unsigned long int now;
	unsigned long int revoked = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		now = revoked >> x;
		if (now & 1)
			counterr++;
	}
	return (counterr);
}

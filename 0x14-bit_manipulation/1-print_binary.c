#include "main.h"




/**
 * print_binary - write binary numbers
 * @n: integer
 */

void print_binary(unsigned long int n)
{
	int x, counter = 0;

	unsigned long int now;

	for (x = 63; x >= 0; x--)
	{
		now = n >> x;

		if (now & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
		{
			_putchar('0');
		}
	}
	if (!counter)
		_putchar('0');
}

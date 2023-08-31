#include "main.h"
/**
 * print_binary - outputs binary nunbers
 * @n:the no.
 */
void print_binary(unsigned long int n)
{
	int e, len = 0;
	unsigned long int now;

	for (e = 63; e >= 0; e--)
	{
		now = n >> e;

		if (now & 1)
		{
			_putchar('1');
			len++;
		}
		else if (len)
			_putchar('0');
	}
	if (!len)
		_putchar('0');
}

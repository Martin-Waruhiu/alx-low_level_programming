#include "main.h"

/**
 * print_line - function to print line
 *@n: integer to be checked
 */

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{

	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
		_putchar('\n');
	}
	}
	_putchar('\n');
}

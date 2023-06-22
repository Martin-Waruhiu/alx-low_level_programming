#include "main.h"

/**
 * print_diagonal - function to print diagonal
 * @n: integer to print number of times
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		int j;

		for (i = 0; i <= n; i++) /*controls number of lines to be printed*/
		{
			for (j = 0; j < n; j++) /*controls position of characters on each line*/
			{
			if (j == i)
			_putchar('\\');
			else if (j < i)
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

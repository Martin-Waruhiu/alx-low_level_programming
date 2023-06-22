#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 * Return: 0
 */

void more_numbers(void)
{
	char count;

	char numbers;

	for (count = 0; count <= 9; count++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)
			_putchar('1');

			_putchar(numbers % 10 + '0');
		}
	}
	_putchar('\n');	
}


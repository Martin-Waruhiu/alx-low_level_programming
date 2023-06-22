#include "main.h"

/**
 * print_numbers - function to print numbers
 *
 * Return: void
 */
void print_numbers(void)
{
	char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		_putchar(numbers);
	}
	_putchar('\n');
}

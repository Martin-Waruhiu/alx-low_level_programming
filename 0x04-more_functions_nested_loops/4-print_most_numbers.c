#include "main.h"

/**
 * print_most_numbers - prints digits apart from 2 and 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	char most_numbers;

	for (most_numbers = '0'; most_numbers <= '9'; most_numbers++)
	{
		if (most_numbers != '2' && most_numbers != '4')
		_putchar(most_numbers);
	}
	_putchar('\n');
	return (0);
}

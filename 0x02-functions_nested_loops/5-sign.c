#include "main.h"
/**
 * print_sign - prints the sign
 * @n: integer to be checked
 * Return: 1 if n is greator 0 when its 0 and -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

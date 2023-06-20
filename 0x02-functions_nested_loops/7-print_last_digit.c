#include "main.h"
/**
 * print_last_digit - to print out the last digit
 * @n: interger to be checked
 * Return: n the value ofwhere we  exract from
 */
int print_last_digit(int n)
{
	 int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}

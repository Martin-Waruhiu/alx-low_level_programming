#include "main.h"

/**
 * factorial - function to print factorial
 * @n: value to find factorial
 * Return: o
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}
}

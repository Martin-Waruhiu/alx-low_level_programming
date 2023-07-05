#include "main.h"

/**
 * _pow_recursion - function to print power
 * @x: to raise
 * @y: to raise by
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{

		return ((x) * _pow_recursion(x, y - 1));
	}
}

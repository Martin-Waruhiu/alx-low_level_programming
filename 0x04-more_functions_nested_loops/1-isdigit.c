#include "main.h"

/**
 * _isdigit - checks the whether c is a digit
 * @c: integer to be checked
 * Return: 1 if integer and 0 otherwise
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

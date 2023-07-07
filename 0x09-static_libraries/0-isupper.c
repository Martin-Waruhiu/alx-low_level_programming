#include "main.h"

/**
 * _isupper - function to check for upper case
 * @c: character to be checked
 * Return: 1 if uppper and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

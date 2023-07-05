#include "main.h"

/**
 * _strlen_recursion - function to find length using recursion
 * @s: string to find its  length
 *Return: length of string and 0 to end (success)
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	return 1 + _strlen_recursion(s + 1);
	}
	return (0);
}

#include "main.h"
/**
 * _isalpha - checking for alphabets
 * @c: character to be checked
 * Return: 1 if alpha and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

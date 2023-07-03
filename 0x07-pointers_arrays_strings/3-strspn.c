#include "main.h"

/**
 * _strspn - function to get length of a prefix substring
 * @s: string to chek
 * @accept: substring
 * Return: length of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s && *s == *accept)
	{
		length++;
		s++;
		accept++;
	}
	return (length);
}

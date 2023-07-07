#include "main.h"

/**
 * _memset - function to fill memory with constant byte
 * @s: - pointer to the area memory
 * @b: - the value to be set
 * @n: the number of bytes to be set to the specified value
 * Return: pointer to to s memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

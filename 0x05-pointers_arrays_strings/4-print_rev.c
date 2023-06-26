#include "main.h"

/**
 * print_rev - function to print inout reverse
 *
 * @s: - name of pointer
 */
void print_rev(char *s)
{
	int length = 0;

	int count;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (count = length; count > 0; count--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}

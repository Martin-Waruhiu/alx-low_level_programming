#include "main.h"

/**
 * _puts - function to print string
 *
 * @str: - name of pointer
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}

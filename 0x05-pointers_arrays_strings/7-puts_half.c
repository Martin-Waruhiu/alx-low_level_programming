#include "main.h"

/**
 * puts_half - function to print half string
 *
 * @str: - string to be printed
 */
void puts_half(char *str)
{
	int a;

	int n;

	int length;

	length = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
	length++;
	}
	n = length / 2;

	if ((length % 2) == 1)
	{
		n = (length +  1 / 2);
	}
	for (a = n; str[a] != '\0'; a++)
	{
		_putchar(str[0]);
	}

	_putchar('\n');
}


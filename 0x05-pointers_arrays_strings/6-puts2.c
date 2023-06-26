#include "main.h"

/**
 * puts2 - function to print string
 *
 * @str: - pointer to the string
 */
void puts2(char *str)
{
	int length = 0; /*store length of input*/

	int t = 0; /*used as a counter*/

	char *y = str; /*intial pointer pointing to first adress*/

	int x;

	while (*y != 0)
	{
	length++;
	y++;
	}
	t = length - 1;

	for (x = 0; x <= t; x++)
	{
		if (x % 2 == 0)
		{
		_putchar(str[x]);
		}
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets ten times
 *
 *
 */
void print_alphabet_x10(void)
{
	int times;

	char alpha;

	for (times = 0; times < 10; ++times)
	{
		for (alpha = 'a'; alpha <= 'z'; ++alpha)
		_putchar(alpha);
	_putchar('\n');
	}
}

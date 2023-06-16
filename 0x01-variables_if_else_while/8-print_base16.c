#include<stdio.h>
/**
 * main - base sixteen
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 16; x++)
	{
		if (x < 10)
			putchar(x + '0');
		else
			putchar(x - 10 + 'a');
	}
	putchar('\n');
	return (0);
}

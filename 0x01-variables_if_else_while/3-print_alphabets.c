#include<stdio.h>
/**
 * main - printing AZ
 *
 * Return: 0
 */
int main(void)
{
	char x;

	char y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
}

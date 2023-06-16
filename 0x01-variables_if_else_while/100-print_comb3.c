#include<stdio.h>
/**
 * main - function
 *
 * printCombinations: - to combine
 * Return: 0
 */
void printCombinations(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
	if
		(i < 8 || j < 9)
		putchar(',');
		putchar(' ');
		}
	}
}
int main(void)
{
	printCombinations();
	return (0);
}

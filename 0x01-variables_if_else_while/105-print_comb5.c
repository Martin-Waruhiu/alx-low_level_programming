 #include <stdio.h>
/**
 * main - function
 *
 * Return: 0
 */
void printNumber(int number)
{
	putchar(number / 10 + '0');
	putchar(number % 10 + '0');
}

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
	for (j = i; j <= 99; j++)
	{
		printNumber(i);
		putchar(' ');
		printNumber(j);
		putchar(',');
		putchar(' ');
	}
	}

	return (0);
}

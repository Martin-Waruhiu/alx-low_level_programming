#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - extacting the last digit
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int x;

	x = (n % 10);

	if (x > 5)
		printf("last digit of %d is %d  and is greater than5\n", n, x);
	if (x == 0)
		printf("last digit of %d is %d and is 0\n", n, x);

	if
		(x < 6 && x != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	/* your code goes there */
	return (0);
}

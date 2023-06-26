#include "main.h"


/**
 * print_array - function to print array
 * @n: - number of elements
 * @a: -pointer
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n - 1; count++)
	{
	printf("%d, ", a[count]);
	}
	if (count == (n - 1))
	{
	printf("%d", a[count]);
	}
	printf("\n");
}

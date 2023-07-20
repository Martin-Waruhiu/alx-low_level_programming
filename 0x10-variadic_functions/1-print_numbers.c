#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_numbers - function to print numbers
 * @separator: str btwn numbers
 * @n: number of optional argsz
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int v;

	va_list p;

	va_start(p, n);

	for (v = 0; v < n; v++)
	{
		printf("%d", va_arg(p, int));
		if (separator != NULL && v != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(p);
	printf("\n");
}

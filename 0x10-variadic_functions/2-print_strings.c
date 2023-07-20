#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"


/**
 * print_strings - func to print string argments
 * @separator: string btwn strings
 * @n: number of str to be passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int e;

	va_list ptrr;

	va_start(ptrr, n);

	for (e = 0; e < n; e++)
	{
		char *string = va_arg(ptrr, char*);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
			if (e != n - 1 && separator != NULL)
			{
				printf("%c", *separator);
			}
		}
	}
	printf("\n");
}

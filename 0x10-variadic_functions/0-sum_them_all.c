#include <stdarg.h>
#include "variadic_functions.h"


/**
 * sum_them_all - func to add all args
 * @n: argc count of func
 * Return: sum  onn success 0 failure
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;

	unsigned int k;

	va_list ptr;

	if (n == 0)
	{
		return (0);
	}
	va_start(ptr, n);

	for (k = 0; k < n; k++)
	{
		sum = sum + va_arg(ptr, int);
	}
	va_end(ptr);

	return (sum);
}

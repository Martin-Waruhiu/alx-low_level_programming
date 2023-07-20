#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - func to print all
 * @format: contains the arguments data types
 */
void print_all(const char * const format, ...)
{
	char c;

	char *s;

	int v = 0;
	va_list ptrr;

	va_start(ptrr, format);

	while (format[v])
	{
		switch (format[v])
		{	case 'c':
			c = va_arg(ptrr, int);
			printf("%c ", c);
			break;
			case 'i':
				printf("%d ", va_arg(ptrr, int));
				break;
			case 'f':
				printf("%f ", va_arg(ptrr, double));
				break;
			case 's':
				s = va_arg(ptrr, char*);
				if (s == NULL)
				{
				printf("(nil)");
				}
				else
				{
				printf("%s", s);
				}
				break;
			default:
			break;
		}
		v++;
	}
	printf("\n");
	va_end(ptrr);
}

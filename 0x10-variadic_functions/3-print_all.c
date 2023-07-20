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

	int i;

	float f;

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
				i = va_arg(ptrr, int);
				printf("%d ", i);
				break;
			case 'f':
				f = va_arg(ptrr, double);
				printf("%f ", f);
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
	va_end(ptrr);
	printf("\n");
}

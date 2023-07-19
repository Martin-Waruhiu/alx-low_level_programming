#include "function_pointers.h"

/**
 * print_name - func to print name
 * @name: string name to print
 * @f: pointer to func
 */


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}

#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - assigns/allocates memory location
 * @b: the size of space allocated
 * Return: the pointer to the memory locatin
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

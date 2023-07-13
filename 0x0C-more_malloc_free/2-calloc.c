#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *_calloc - allocate memory and set to zero
 * @nmemb: number of elements
 * @size: sizee in bytes
 * Return: pointer to memory location
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int full_size = (nmemb * size);

	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(full_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, full_size);

	return (ptr);
}



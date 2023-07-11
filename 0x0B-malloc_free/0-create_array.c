#include <stdlib.h>
#include "main.h"


/**
 * create_array - function for array formation
 * @c: first character initialised
 * @size:size of array
 * Return:NULL if failed and pointer t array if success
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = (char *)malloc(size * sizeof(char));
	}
	if (p == NULL)
	{
		return (NULL);
	}
	*p = c;
	return (p);
	free(p);

}

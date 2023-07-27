#include "lists.h"
#include <stdlib.h>

/**
 * list_len - listings no. of elements
 * @h: pointer to firs node
 * Return: elementz
 */


size_t list_len(const list_t *h)
{
	size_t elementz = 0;

	while (h != NULL)
	{
		elementz++;
		h = h->next;
	}
	return (elementz);
}

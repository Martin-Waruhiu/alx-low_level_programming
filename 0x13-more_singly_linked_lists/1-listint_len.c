#include "lists.h"




/**
 * listint_len - func to calc no. of elements in lists
 * @h: head
 * Return: counter
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h)
		{
			counter++;
			h = h->next;
		}

	}
	return (counter);
}

#include "lists.h"
#include <stdio.h>


/**
 * print_listint - func to print list elements
 * @h: head pinting to the first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node_counter = 0;

	if (h == NULL)
	{
		return  (0);
	}
	else
	{
		while (h)
		{
			printf("%d\n", h->n);
			node_counter++;
			h = h->next;
		}
	}
	return (node_counter);
}

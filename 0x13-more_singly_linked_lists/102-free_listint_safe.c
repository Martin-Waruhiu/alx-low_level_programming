#include "lists.h"
#include <stdlib.h>


/**
 * free_listint_safe - func to print lists safe
 * @h: head pointer
 * Return: nods
 */

size_t free_listint_safe(listint_t **h)
{
	size_t lennn = 0;
	int dife;
	listint_t *tempo;


	if (!h || !*h)
	return (0);


	while (*h)
	{
		dife = *h - (*h)->next;
		if (dife > 0)
		{
			tempo = (*h)->next;
			free(*h);
			*h = tempo;
			lennn++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lennn++;
			break;
		}
	}


	*h = NULL;


	return (lennn);
}

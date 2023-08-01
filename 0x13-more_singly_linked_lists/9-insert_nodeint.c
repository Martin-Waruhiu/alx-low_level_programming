#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -minserts new node at an index
 * @head: pointer to first index
 * @idx: index position to place new node
 * @n: data type n
 * Return: addi of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *tempo = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (j = 0; tempo && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new->next = tempo->next;
			tempo->next = new;
			return (new);
		}
		else
			tempo = tempo->next;
	}

	return (NULL);
}

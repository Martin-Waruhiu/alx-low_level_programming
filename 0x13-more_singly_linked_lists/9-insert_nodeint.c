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
	listint_t *new_n;
	listint_t *tempo = *head;

	new_n = malloc(sizeof(listint_t));
	if (!new_n || !head)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}

	for (j = 0; tempo && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new_n->next = tempo->next;
			tempo->next = new_n;
			return (new_n);
		}
		else
			tempo = tempo->next;
	}

	return (NULL);
}

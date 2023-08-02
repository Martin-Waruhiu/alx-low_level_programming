#include "lists.h"


/**
 * reverse_listint
 * @head: poimter to node s
 * Return: head
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *previouss = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->nxt;
		(*head)->nxt = previouss;
		previouss = *head;
		*head = next;
	}

	*head = previouss;


	return (*head);
}

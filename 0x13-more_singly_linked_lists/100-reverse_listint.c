#include "lists.h"


/**
 * reverse_listint - func to reverse
 * @head: poimter to node s
 * Return: head
 *
 *
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *previouss = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previouss;
		previouss = *head;
		*head = next;
	}

	*head = previouss;


	return (*head);
}

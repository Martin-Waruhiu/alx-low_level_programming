#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - func to add new node at the start.
 * @head: pointer to the first node
 * @n: int data type;
 * Return: new_node adresss
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}

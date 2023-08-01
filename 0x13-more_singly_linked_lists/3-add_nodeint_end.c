#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - func to add newnode at the end
 * @head: pointer to starting node
 * @n: intger type n
 * Return: addi of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *ptrhead;

	ptrhead = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head =  new_node;
	} /*transverse through till the null is found*/
	else
	{
		while (ptrhead->next != NULL)
		{
			ptrhead = ptrhead->next;
		}
		ptrhead->next = new_node;
	}
	return (*head);
}

#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint - function to delete head node
 * @head: pointer to first node
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;

	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	tempo = *head;
	data = tempo->n;
	*head = tempo->next;
	free(tempo);
	tempo = NULL;

	return (data);
}

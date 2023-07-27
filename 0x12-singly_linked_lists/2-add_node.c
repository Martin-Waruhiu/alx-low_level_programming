#include "lists.h"
#include <stdlib.h>


/**
 * add_node - insert node at beggining of nodes
 * @head: - the pointer to first node of list
 * @str: string to duplicate
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{

		new->str = strdup(str);
		new->len = srtlen(len);
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}

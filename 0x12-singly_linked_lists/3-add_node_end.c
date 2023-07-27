#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - inserting new node at the end list
 * @head: head pointing to first node
 * @str: string to duplicate
 * Return: new node address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr_head;

	unsigned int len = 0;

	while (str[len])
		len++;

	/*allocate memory for new node*/
	new_node = malloc(sizeof(list_t));
	if (new_node ==  NULL)
	{
		return (NULL);
	}
	else
	{

		/*update node members*/
		new_node->str = strdup(str);
		new_node->len = len;
		new_node->next = NULL;

		/*using head to tranverse the nodes*/
		ptr_head = *head;
		/*if node is empty*/
		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}

		/*find the last node before insertion*/
		while (ptr_head->next != NULL)
		{
			ptr_head = ptr_head->next;
		}
		/*update it to point to new node instead of NULL*/
		ptr_head->next = new_node;
	}
	return (new_node);
}

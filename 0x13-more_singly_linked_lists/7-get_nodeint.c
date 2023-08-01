#include "lists.h"
#include <stdlib.h>


/**
 * get_nodeint_at_index - function to fin nth node
 * @head: pointer to ffirst node
 * @index: index to nth node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tempo, *ptr;

	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	tempo = head;
	while (i != index && tempo)
	{
		tempo = tempo->next;
		i++;
	}
	ptr = tempo->next;
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}

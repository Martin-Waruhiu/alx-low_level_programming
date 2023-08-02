#include <stdio.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);


/**
 * looped_listint_len - checks ubique nodess
 * @head: A pointer to head
 *
 * Return: no loop - 0.
 * Otherwise - the number nodes in list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *torto, *haea;
	size_t nodess = 1;

	if (head == NULL || head->next == NULL)
	return (0);


	torto = head->next;

	haea = (head->next)->next;

	while (haea)
	{
		if (torto == haea)
		{
			torto = head;
			while (torto != haea)
			{
				nodess++;
				torto = torto->next;
				haea = haea->next;
			}


			torto = torto->next;
			while (torto != haea)
			{
				nodess++;
				torto = torto->next;
			}


			return (nodess);
		}


		torto = torto->next;
		haea = (haea->next)->next;
	}


	return (0);
}

/**
 * print_listint_safe - safe pritn
 * @head: A pointer to head
 *
 * Return: nodees in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, indx = 0;

	nodes = looped_listint_len(head);


	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}


	else
	{
		for (indx = 0; indx < nodes; indx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}


		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

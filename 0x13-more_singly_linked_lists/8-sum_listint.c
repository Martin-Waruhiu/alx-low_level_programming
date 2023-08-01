#include "lists.h"
#include <stdlib.h>


/**
 * sum_listint - function to find sum of n
 * @head: poiter to first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *tempo;

	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
	tempo = head;
	while (tempo)
	{
		sum = sum + tempo->n;
		tempo = tempo->next;
	}
	}
	return (sum);
}

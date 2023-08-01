#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free lists
 * @head: pointer to fisrt node
 */

void free_listint2(listint_t **head)
{
	listint_t *ptrhead, *p;

	if (head == NULL)
	{
		return;
	}
	p = *head;
	while (p)
	{
		ptrhead = p->next; /*store next node temoraririly*/
		free(p);  /*free the current*/
		p = ptrhead; /*move to the next node*/
	}
	*head = NULL;
}

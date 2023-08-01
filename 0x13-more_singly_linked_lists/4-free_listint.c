#include "lists.h"
#include <stdlib.h>



/**
 * free_listint - free memory
 * @head: pointer to first node
 */
void free_listint(listint_t *head)
{
	listint_t *tempp;


	while (head)
	{
		tempp = head->next; /*store the next temporarily*/
		free(head); /*free the current*/
		head = tempp; /*go to next*/
	}
}

#include "lists.h"
#include "stdlib.h"

/**
 * free_list - free memmory
 * @head: head ointing to 1st node
 */

void free_list(list_t *head)
{
	list *ptrr;

	while (head)
	{
		ptrr = head->next;/*store next node temporarily*/
		free(str);
		free(head);/**we wont loose next node its stored*/
		ptrr = head;
	}
}

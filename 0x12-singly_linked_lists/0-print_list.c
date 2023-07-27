#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - writes node elements
 * @h:pointer tofirst node
 * Return: size
 */
size_t print_list(const list_t *h)
{

	size_t node = 0;

	/*h points to the whole  first node*/
while(h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u]%s\n", h->len, h->str);
h = h->next;/*let h point to next node*/
node++;
}
return (node);
}

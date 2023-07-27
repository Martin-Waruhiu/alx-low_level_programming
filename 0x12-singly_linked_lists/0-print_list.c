#include <stdio.h>
#include "lists.h"

/**
 * print_list - writes the members of listt
 * @h: pointer tomlist to print
 *
 * Return:nodes
 */
size_t print_list(const list_t *h)
{
size_t spp = 0;


while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
spp++;
}
return (spp);
}

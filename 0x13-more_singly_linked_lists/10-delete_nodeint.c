#include "lists.h"
#include <stdlib.h>


/**
 * delete_nodeint_at_index - func to delete node
 * @head: head of func
 * @index:m indwex
 * Return: 0 on success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
        listint_t *tempo = *head;
        listint_t *currenttt = NULL;
        unsigned int j = 0;


        if (*head == NULL)
                return (-1);


        if (index == 0)
        {
                *head = (*head)->next;
                free(tempo);
                return (1);
        }


        while (j < index - 1)
        {
                if (!tempo || !(tempo->next))
                        return (-1);
                tempo = tempo->next;
                j++;
        }




        currenttt = tempo->next;
        tempo->next = currenttt->next;
        free(currenttt);


        return (1);
}

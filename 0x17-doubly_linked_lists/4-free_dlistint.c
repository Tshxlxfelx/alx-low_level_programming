#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    while (current)
    {
        dlistint_t *temp = current;
        current = current->next;
        free(temp);
    }
}


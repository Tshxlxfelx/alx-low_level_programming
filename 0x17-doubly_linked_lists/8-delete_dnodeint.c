#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    if (head == NULL || *head == NULL)
        return -1;

    if (index == 0)
    {
        dlistint_t *temp = *head;
        *head = (*head)->next;
        if (*head)
            (*head)->prev = NULL;
        free(temp);
        return 1;
    }

    dlistint_t *current = *head;
    for (unsigned int i = 0; i < index; i++)
    {
        if (current == NULL)
            return -1;
        current = current->next;
    }

    if (current == NULL)
        return -1;

    if (current->prev)
        current->prev->next = current->next;
    if (current->next)
        current->next->prev = current->prev;

    free(current);
    return 1;
}


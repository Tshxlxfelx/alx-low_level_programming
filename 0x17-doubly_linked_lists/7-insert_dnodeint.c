#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index of the list where the new node should be added. Index starts at 0.
 * @n: Value to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    if (h == NULL)
        return NULL;

    dlistint_t *newNode = malloc(sizeof(dlistint_t));
    if (!newNode)
        return NULL;

    newNode->n = n;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (idx == 0)
    {
        newNode->next = *h;
        if (*h)
            (*h)->prev = newNode;
        *h = newNode;
        return newNode;
    }

    dlistint_t *current = *h;
    for (unsigned int i = 0; i < idx - 1; i++)
    {
        if (current == NULL)
        {
            free(newNode);
            return NULL;
        }
        current = current->next;
    }

    if (current == NULL)
    {
        free(newNode);
        return NULL;
    }

    newNode->next = current->next;
    newNode->prev = current;
    if (current->next)
        current->next->prev = newNode;
    current->next = newNode;

    return newNode;
}


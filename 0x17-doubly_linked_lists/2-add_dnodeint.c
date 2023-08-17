#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @n: Value to be stored in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newNode = malloc(sizeof(dlistint_t));
    if (!newNode)
        return NULL;

    newNode->n = n;
    newNode->prev = NULL;
    newNode->next = *head;

    if (*head)
        (*head)->prev = newNode;

    *head = newNode;

    return newNode;
}


#include "lists.h"

/**
 *  reverse_ listint - reverse  linked list.
 *
 *  @head: pointer to the first node in the list
 *
 *  Return: pointer to the firs node
 */
listint_t *reverse_listint(listint_t **head)

{
listint_t *prev = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}

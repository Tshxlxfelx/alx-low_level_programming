#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    dlistint_t *head = NULL;

    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);

    printf("Original list:\n");
    print_dlistint(head);

    printf("List length: %lu\n", dlistint_len(head));

    printf("Sum of list: %d\n", sum_dlistint(head));

    dlistint_t *node = get_dnodeint_at_index(head, 2);
    if (node)
        printf("Node at index 2: %d\n", node->n);

    insert_dnodeint_at_index(&head, 2, 99);
    printf("List after insertion at index 2:\n");
    print_dlistint(head);

    delete_dnodeint_at_index(&head, 3);
    printf("List after deletion at index 3:\n");
    print_dlistint(head);

    free_dlistint(head);

    return (EXIT_SUCCESS);
}


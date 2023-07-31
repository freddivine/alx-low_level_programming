#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list, even if the list contains a loop
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *curr, *temp;

    if (head == NULL)
        exit(98);

    curr = head;
    while (curr != NULL)
    {
        printf("[%p] %d\n", (void *)curr, curr->n);
        count++;

        temp = curr;
        curr = curr->next;

        /* Check if we've reached a node we've already printed */
        if (curr >= temp)
        {
            printf("-> [%p] %d\n", (void *)curr, curr->n);
            break;
        }
    }

    return count;
}

#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a linked list of integers.
 * @head: Pointer to a pointer to the first node of the list.
 *
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}

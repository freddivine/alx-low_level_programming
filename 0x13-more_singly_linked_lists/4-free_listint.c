#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees listint_t list
 * @head: node head
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements of a node
 * @h: pointer to the head
 * Return: returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h == NULL)
			printf("Error\n");
		else
			printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

#include "lists.h"
#include <stdio.h>

/**
 * listint_len - print the length of node
 * @h: pounts to head
 * Return: returns num of node
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h == NULL)
			printf("Error\n");

		count++;
		h = h->next;
	}
	return (count);
}

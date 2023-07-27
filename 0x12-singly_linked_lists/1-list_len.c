#include "lists.h"
#include <stdlib.h>


/**
 * list_len - returns number of elements
 * @h: head of node
 * Return: returns number of element
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;

		h = h->next;
	}
	return (count);
}

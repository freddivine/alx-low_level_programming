#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n)
 * @head: node head
 * Return: returns the sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;

	int count = 0;

	if (head == NULL)
		return (0);

	tmp = head;

	while (tmp != NULL)
	{
		count += tmp->n;
		tmp = tmp->next;
	}
	return (count);
}

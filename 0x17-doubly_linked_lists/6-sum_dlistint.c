include "lists.h"

/**
 * sum_dlistint - returns sum of all data (n) of a linked list
 * @head: pointer to the head of the list
 *
 * Return: if list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		total += i->n;
	}
	return (total);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to head of list
 * @index: index of the node we're getting
 * Return: NULL or node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp_node = head;
	unsigned int n = 0;

	if (temp_node == NULL)
		return (NULL);
	while (temp_node != NULL)
	{
		if (n == index)
			return (temp_node);
		n++;
		temp_node = temp_node->next;
	}
	return (NULL);
}

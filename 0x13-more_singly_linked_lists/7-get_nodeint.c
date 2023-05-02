#include "lists.h"

/**
* get_nodeint_at_index - returns nth node of listint_t linked list
* @head: pointer to head pointer of linked list
* @index: index of node
* Return: nth node, NULL for error
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && head != NULL)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	return (NULL);
}

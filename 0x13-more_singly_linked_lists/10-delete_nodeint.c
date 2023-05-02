#include "lists.h"

/**
  * delete_nodeint_at_index - deletes node at index
  * @head: pointer to pointer of head element
  * @index: index of node to be deleted
  *
  * Return: 1 if successful, -1 if error
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *next_node, *temp_node;

	temp_node = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp_node->next;
		free(temp_node);
		return (1);
	}

	while (temp_node != NULL && i < index - 1)
	{
		temp_node = temp_node->next;
		i++;
		if (temp_node == NULL || temp_node->next == NULL)
			return (-1);
	}

	next_node = temp_node->next->next;
	free(temp_node->next);
	temp_node->next = next_node;

	return (1);
}

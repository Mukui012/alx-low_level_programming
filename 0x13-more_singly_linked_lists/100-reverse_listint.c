#include "lists.h"

/**
  * reverse_listint - reverses a listint_t.
  * @head: pointer to pointer of first list element.
  *
  * Return: pointer to first node of reversed list.
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node1, *node2 = NULL;

	while (*head != NULL)
	{
		node1 = *head;
		*head = (*head)->next;
		node2->next = node1;
		node1 = node2;
	}
	*head = node2;

	return (*head);
}

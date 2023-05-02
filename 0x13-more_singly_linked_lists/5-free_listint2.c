#include "lists.h"

/**
 * free_listint2 - frees a linked list sets head to NULL
 * @head: pointer to node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *lt;

	if (head)
	{
		while (*head)
		{
			lt = *head;
			*head = lt->next;
			free(lt);
		}
	}
}

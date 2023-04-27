#include "lists.h"

/**
 * free_list - free list
 * @head: pointer to the head to be freed
 */

void free_list(list_t *head)
{
	list_t *c_list;

	if (head)
	{
		while (head)
		{
			c_list = head->next;
			free(head->str);
			free(head);

			head = c_list;
		}
	}
}

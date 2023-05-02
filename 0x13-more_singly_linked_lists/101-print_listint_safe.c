#include "lists.h"

/**
 * print_listint_safe - prints linked list
 * @head: pointer to head node of linked list
 * Return: number of elements in linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, j = 0;
	const listint_t *temp = head, *new;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		i++;
		temp = temp->next;
		new = head;

		while (j < i)
		{
			if (temp == new)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (i);
			}
			new = new->next;
			j++;
		}
	}
	return (i);
}

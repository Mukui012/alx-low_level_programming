#include "lists.h"

/**
 * find_listint_loop - finds the loop inside of a linked list
 * @head: pointer to head node of linked list
 * Return: address of node where loop starts, NULL(no loop)
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head, *find;

	if (!head)
		return (NULL);
	if (head == head->next)
		return (head);
	while (temp)
	{
		temp = temp->next;
		find = head;
		while (temp && find != temp)
		{
			if (find == temp->next)
				return (find);
			find = find->next;
		}
	}
	return (temp);
}

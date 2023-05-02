#include "lists.h"

/**
* pop_listint - deletes the head node, and returns the head node’s data
* @head: pointer to linked list
* Return: head node's data
*/

int pop_listint(listint_t **head)
{
	int r_value;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	r_value = temp->n;

	*head = temp->next;
	free(temp);

	return (r_value);
}

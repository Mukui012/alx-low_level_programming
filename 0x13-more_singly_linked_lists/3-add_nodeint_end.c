#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* Return: address of the new element,or NULL if it failed
* @head: pointer to the first node
* @n: integer
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node; /** cp is the new node to be added at the end*/
	listint_t *new;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;
	else
	{
		new = *head;

	while (new->next != NULL)
		new = new->next;
	new->next = end_node;
	}
	return (end_node);
}

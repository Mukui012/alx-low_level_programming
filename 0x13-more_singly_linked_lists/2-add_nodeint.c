#include "lists.h"
#include <string.h>

/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @n: integer
* Return: address of new element,NULL if it failed
* @head: pointer to the first node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node1;

	node1 = malloc(sizeof(listint_t));
	if (node1 == NULL)
	return (NULL);

	node1->n = n;
	node1->next = *head;
	*head = node1;

	return (node1);
}

#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list
 * @head: head of the linked list
 * @str: string
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	size_t new_char;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (new_char = 0; str[new_char]; new_char++)
		;

	n->len = new_char;
	n->next = *head;
	*head = n;

	return (*head);
}

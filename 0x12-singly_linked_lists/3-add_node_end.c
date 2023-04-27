#include "lists.h"
#include <stdio.h>

/**
* add_node_end - adds a new node at the end of a list
* @head: pointer to the last node
* @str: string
* Return: address of new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cp = NULL;
	char *str1;
	list_t *new;

	cp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	str1 = strdup(str);

	if (str1 == NULL)
	{
		free(new);
	return (NULL);
	}

	new->len = strlen(str);
	new->str = str1;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	return (new);
	}

	while (cp->next != NULL)
		cp = cp->next;
	cp->next = new;

	return (new);
}

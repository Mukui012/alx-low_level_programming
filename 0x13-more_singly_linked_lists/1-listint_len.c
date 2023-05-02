#include "lists.h"
#include <stdio.h>

/**
* listint_len - returns the number of elements in a linked listint_t list
* @h: pointer to the node
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t n_elem = 0;

	while (h != NULL)
	{
		n_elem++;
		h = h->next;
	}
	return (n_elem);
}

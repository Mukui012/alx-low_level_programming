#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to head of linked list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *copy = h;
	size_t n = 0;

	while (copy)
	{
		copy = copy->next;
		n++;
	}
	return (n);
}

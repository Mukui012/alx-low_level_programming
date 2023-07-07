#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to hash table else return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_value;
	hash_node_t **node;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	hash_value = malloc(sizeof(hash_table_t));
	if (!hash_value)
		return (NULL);
	node = malloc(sizeof(*node) * size);
	if (!node)
	{
		free(hash_value);
		return (NULL);
	}
	while (i < size)
	{
		node[i] = NULL;
		i++;
	}
	hash_value->size = size;
	hash_value->array = node;
	return (hash_value);
}

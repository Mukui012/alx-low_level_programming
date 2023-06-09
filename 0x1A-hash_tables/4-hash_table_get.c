#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *tmp;

	/* find index in hash table where key is */
	/* look through linked list to find matching key for value */

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	tmp = (ht->array)[index];
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	else
		return (tmp->value);
}

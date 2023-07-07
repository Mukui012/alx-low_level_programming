#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table
 * @key: key
 * @idx: index
 * @value: value associated with the key
 * Return: 1(Success), 0(Failure)
 */

int create_and_add_node(hash_table_t *ht, const char *key, const char *value,
			unsigned long int idx)
{
	hash_node_t *node = NULL;
	char *s;
	char *p;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	s = strdup(key);
	if (!s)
	{
		free(node);
		return (0);
	}

	p = strdup(value);
	if (!p)
	{
		free(s);
		free(node);
		return (0);
	}

	node->key = s;
	node->value = p;

	if ((ht->array)[idx] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[idx];
	(ht->array)[idx] = node;
	return (1);
}

/**
 * hash_table_set - add element to hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* get index */
	/* if key already exists, update value and return */
	/* else create node */
	/* set ht idx ptr to node; else add node to front if collision */

	unsigned int index;
	hash_node_t *node = NULL;
	char *ch;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[index];
	while (node && (strcmp(key, node->key) != 0))
		node = node->next;
	if (node != NULL)
	{
		ch = strdup(value);
		if (!ch)
			return (0);
		if (node->value)
			free(node->value);
		node->value = ch;
		return (1);
	}
	return (create_and_add_node(ht, key, value, index));
}

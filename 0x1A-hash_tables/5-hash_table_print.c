#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *node;
	char *ch = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (index < ht->size)
	{
		node = ((ht->array)[index]);
		while (node)
		{
			printf("%s'%s': '%s'", ch, node->key, node->value);
			ch = ", ";
			node = node->next;
																				}
		index++;
	}
	puts("}");
}

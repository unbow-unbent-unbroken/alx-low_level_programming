#include "hash_tables.h"

/**
 * hash_table_delete - A functio that deletes a hash table
 * @ht: Is the hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp_node;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp_node;
		}
	}

	free(ht->array);
	free(ht);
}

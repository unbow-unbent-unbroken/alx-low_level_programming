#include "hash_tables.h"

/**
 * hash_table-print - A function that prints a hash table
 * @ht: Is the hash table
 *
 * Description: Key/value pairs are printed in the order
 * they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n")
}

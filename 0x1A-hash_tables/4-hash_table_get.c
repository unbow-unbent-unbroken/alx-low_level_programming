#include "hash_table.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key
 * @ht: Is the hash table you want to look into
 * @key: The key you are looking for
 *
 * Return: The value associated withe the element or
 * NULL if key couldn't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_table_t temp_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);

	temp_node = temp_node->array[index];

	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}
	return (NULL);
}

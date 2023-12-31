#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: This size of the array
 *
 * Return: A pointer to the newly created hash table or
 * NULL if something went wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	/* Allocate memory for the hash table structure */
	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	/* Set the size of the hash table */
	new_table->size = size;

	/* Allocate memory or the array f pointers to linked lists */
	new_table->array = malloc(sizeof(hash_table_t *) * size);

	if (new_table->array == NULL)
		return (NULL);

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}

#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key
 * @key: Is the key
 * @size: Is the size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 * 		in the array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Use the hash function hash_djb2 to generate hash value */
	hash_value = hash_djb2(key);

	/* Calculate the index where the key/value pair should be stored */
	return (hash_value % size);
}

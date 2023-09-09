#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory block to be reallocated.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the reallocated memory block or NULL on failure.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size, i;

	/* Check if new_size is equal to old_size */
	if (new_size == old_size)
		return (ptr);

	/* If ptr is NULL, treat it as malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));

	/* If new_size is zero, treat it as free(ptr) */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/* Calculate the minimum size to copy */
	min_size = old_size < new_size ? old_size : new_size;

	/* Allocate memory for the new block */
	new_ptr = malloc(new_size);

	/* Check if malloc failed */
	if (new_ptr == NULL)
		return (NULL);

	/* Copy the contents of the old block to the new block */
	for (i = 0; i < min_size; i++)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}

	/* Free the old block */
	free(ptr);

	return (new_ptr);
}


#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure to free
 *
 * Description: This function frees the memory allocated for a dog structure,
 * including the memory for the name and owner strings.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* Free the dynamically allocated memory for name and owner */
	free(d->name);
	free(d->owner);

	/* Free the memory for the dog structure itself */
	free(d);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with name, age, and owner
 * @name: Pointer to a character representing the dog's name
 * @age: Floating-point number representing the dog's age
 * @owner: Pointer to a character representing the dog's owner
 *
 * Return: Pointer to the newly created dog, or NULL if memory allocation fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	/* Allocate memory for the new dog */
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name and owner strings and copy the data */
	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		/* Memory allocation failed, so free the allocated memory and return NULL */
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}

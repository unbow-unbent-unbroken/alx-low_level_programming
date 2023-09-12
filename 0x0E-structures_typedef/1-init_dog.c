#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog variable
 * @d: Pointer to the struct dog variable to initialize
 * @name: Pointer to a character representing the dog's name
 * @age: Floating-point number representing the dog's age
 * @owner: Pointer to a character representing the dog's owner
 *
 * Description: This function initializes a struct dog variable
 * with the provided name, age, and owner values.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

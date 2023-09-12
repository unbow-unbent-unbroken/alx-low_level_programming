#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog with name, age, and owner.
 * @name: Pointer to a character representing the dog's name.
 * @age: Floating-point number representing the dog's age.
 * @owner: Pointer to a character representing the dog's owner.
 *
 * Description: This structure defines a dog with its name, age, and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/**
 * struct dog_t - Defines the new type as a name for the type struct dog
 */
typedef struct dog dog_t;

#endif /* DOG_H */

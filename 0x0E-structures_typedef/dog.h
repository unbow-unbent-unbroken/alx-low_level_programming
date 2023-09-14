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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */

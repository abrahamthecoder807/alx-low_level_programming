#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - A function that initializes a variable of type struct dog
 * @name: name of the dog to initialize
 * @age: the age of the dog to initialize
 * @d: points to struct dog to initialize
 * @owner: the dog's owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog  - A function that prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->name == NULL)
		d->name = "(nil)";
	if (d == NULL)
		return;
	printf("name: $s\n age: %f\n owner: %s\n", d->name, d->age, d->owner);
}

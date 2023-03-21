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
	printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}

#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog  - A function that prints a struct dog
 * @d: struct dog to print
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->name == NULL)
		d->name = "(nil)";
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}

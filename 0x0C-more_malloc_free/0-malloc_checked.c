#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}

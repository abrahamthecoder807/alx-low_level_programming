#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char
 * @size: The size of the array
 * @c: The char to fill in the array
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int  i;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}

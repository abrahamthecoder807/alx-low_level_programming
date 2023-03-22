#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: a pointer to array
 * @size: size of array
 * @action: pointer to print in regular or hex
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

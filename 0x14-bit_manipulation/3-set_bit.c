#include "main.h"

/**
 * set_bit - A function that fixes that value of  bit to 1 at a given index
 * @n: the number of index
 * @index: Index to attain
 * Return: return 1 if it works and -1 if we get an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}

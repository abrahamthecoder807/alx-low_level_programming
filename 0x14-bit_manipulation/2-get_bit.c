#include "main.h"

/**
 * get_bit - A functain that attains the value of bit at a given index
 * @n: Number of index to attain
 * @index: Index to attain
 * Return: The value of the bit at index or 1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if (n & max)
		return (1);
	else
		return (0);
}

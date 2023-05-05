#include "main.h"
/**
* flip_bits - function that returns the number of bits you would need to flip
* @n: The number of bits needed
* @m: The number of bit to get
* Return: the number of bits flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, y = 0;

	x = n ^ m;

	while (x > 0)
	{
		if ((x & 1) != 0)
			y++;

		x = x >> 1;
	}
	return (y);
}

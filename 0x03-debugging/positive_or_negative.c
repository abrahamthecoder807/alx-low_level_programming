#include "main.h"

/**
 * positive_or_negative - checks for positive or negative numbers
 * @i: the number to be checked
 * Return: Always 0 (success)
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive\n", i);
}


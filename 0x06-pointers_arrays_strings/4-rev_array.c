#include "main.h"

/**
 * reverse_array - A function that reverse an array of int
 * @a: content
 * @n: element of content
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

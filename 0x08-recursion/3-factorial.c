#include "main.h"

/**
 * factorial - A function that returns the factorial of a number
 * @n: input integer
 * Return: Always 0 (success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

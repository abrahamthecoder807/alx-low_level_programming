#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse
 * @s: the string to reverse
 * Return: Always 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

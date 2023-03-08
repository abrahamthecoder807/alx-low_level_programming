#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char
 * @s: value to modify
 * @to: value to assign
 * Return: Always 0 (success)
 */

void set_string(char **s, char *to)
{
	*s = to;
}

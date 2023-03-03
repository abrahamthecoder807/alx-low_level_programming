#include "main.h"

/**
 * string_toupper - A function that changes all lowercase letter
 * s of a string to uppercase
 * @s: input string
 * Return: char pointer to be changed
 */

char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}

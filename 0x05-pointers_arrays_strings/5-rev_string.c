#include <stdio.h>
#include "main.h"

/**
 * rev_string - A function that reverse a string
 * @s: The string to be modified
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}

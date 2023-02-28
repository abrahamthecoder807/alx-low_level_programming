#include <stdio.h>
#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: string to count
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

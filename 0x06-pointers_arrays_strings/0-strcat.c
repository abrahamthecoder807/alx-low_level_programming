#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: A pointer to the resulting string destination
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}

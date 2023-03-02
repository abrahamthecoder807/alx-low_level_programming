#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Entry point
 * @dest: copy to
 * @src: copy from
 * @n: Input number of char
 * Return: Always 0 (success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}

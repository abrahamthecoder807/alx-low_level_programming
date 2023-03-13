#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: copy to
 * @src: copy from
 * @n: Input number of char
 * Return: Always 0 (success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}
	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}

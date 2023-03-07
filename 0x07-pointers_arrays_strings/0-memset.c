#include "main.h"

/**
 * _memset - Afunction thta fills memory with constant byte
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: return pointers to location filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}

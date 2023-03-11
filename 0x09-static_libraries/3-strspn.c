#include "main.h"

/**
 * _strspn - search a string for  a set of bytes
 * @s: source string
 * @accept: accepted string
 * Return: returns number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, t = 0, b;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}

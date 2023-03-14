#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - A function that duplicate a string
 * @str: the string to duplicate
 * Return: A pointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
		return (NULL);
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}

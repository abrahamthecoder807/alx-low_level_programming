#include "lists.h"

/**
 * list_len - a function that returns the number of element
 * @h: variable pointer
 * Return: The number of element
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

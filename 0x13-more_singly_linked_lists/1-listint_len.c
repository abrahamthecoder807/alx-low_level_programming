#include "lists.h"

/**
 * listint_len - A function thst returns the number of element in a linked list
 * @h: The head of the linked list
 *
 * Return: the number of elments
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}

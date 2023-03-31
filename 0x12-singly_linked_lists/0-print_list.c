#include "list.h"

/**
 * print_list - aA function that prints all element of a list
 * @h: pointer that points to the node
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0} (nil)\n");
		}
		els
		{
			pfintf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		count++;
	}
	return (count);
}

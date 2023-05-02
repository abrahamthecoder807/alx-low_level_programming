#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a listint_t linked list
 * @head: The head of a linked list
 * @index: The index of the node
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (index == count)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}

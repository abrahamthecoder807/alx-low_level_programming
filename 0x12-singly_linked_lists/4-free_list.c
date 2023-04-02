#include "lists.h"

/**
 * free_list - A function that frres a list
 * @head: pointer to element of list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}

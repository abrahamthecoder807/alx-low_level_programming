#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head: The head of a linked list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}


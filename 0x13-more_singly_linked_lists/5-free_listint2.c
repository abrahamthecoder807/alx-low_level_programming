#include "lists.h"

/**
 * free_listint2 - A fuction that frees a listint_t list
 * @head: The head of a linked list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;

	while (temp)
	{
		temp - temp->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}

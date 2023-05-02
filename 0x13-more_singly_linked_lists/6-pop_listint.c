#include "lists.h"

/**
 * pop_listint - A function that deletes the head of a listint_t linked list,
 * and returns the node's data(n)
 * @head: The head of a linked list
 * Return: The head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (head == NULL)
		return (0);

	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}

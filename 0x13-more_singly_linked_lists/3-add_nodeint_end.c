#include "lists.h"

/**
 * add_nodeint_end - A function that add a new node at the end of a linked list
 * @head: The head of s linked list
 * @n: integer value to be added to a new node
 * Return: The address of the element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, temp;

	new_node = malloc(sizeof(listint_t));
	while (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}

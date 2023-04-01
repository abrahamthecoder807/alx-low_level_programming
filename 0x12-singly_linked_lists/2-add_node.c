#include "lists.h"

/**
 * *add_node - A function that adds a node at the beginnung of a list
 * @head: variable pointer to pointer
 * @str: variable pointer
 * Return: the address of the new list, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int cont = 0;

	while (str[cont] != '\0')
	{
		cont++;
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->len = cont;
	new_node->str = strdup(str);
	*head = new_node;

	return (*head);
}


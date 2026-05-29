#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end
 * @head: double pointer to the head
 * @n: integer to add
 *
 * Return: address of new node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	if (head == NULL)
	return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
{
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}

	current = *head;
	while (current->next != NULL)
	current = current->next;

	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}

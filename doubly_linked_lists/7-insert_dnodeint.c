#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index
 * @h: double pointer to head
 * @idx: index where to insert
 * @n: value to insert
 *
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;

	if (h == NULL)
	return (NULL);

	if (idx == 0)
	return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;

	current = *h;
	while (current != NULL && i < idx - 1)
{
	current = current->next;
	i++;
}

	if (current == NULL)
{
	free(new_node);
	return (NULL);
}

	new_node->next = current->next;
	new_node->prev = current;

	if (current->next != NULL)
	current->next->prev = new_node;

	current->next = new_node;

	return (new_node);
}

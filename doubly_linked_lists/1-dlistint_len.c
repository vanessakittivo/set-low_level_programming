#include "lists.h"

/**
 * dlistint_len
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
{
	count++;
	current = current->next;
}
	return (count);
}

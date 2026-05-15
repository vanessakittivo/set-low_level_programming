#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: double pointer to head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next_node;

	if (head == NULL)
	return;
	current = *head;
	while (current != NULL)
{
	next_node = current->next;
	free(current);
	current = next_node;
}
	*head = NULL;
}

#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to the head node
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;
	current = *head;

	while (current != NULL)
	{
		*head = current->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (*head);
}

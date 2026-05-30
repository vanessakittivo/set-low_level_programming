#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list (safely handles loops)
 * @h: double pointer to the head
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);

		if (current == *h)
			break;
	}

	*h = NULL;
	return (count);
}

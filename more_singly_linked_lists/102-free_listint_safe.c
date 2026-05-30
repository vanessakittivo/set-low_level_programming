#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list (safely handles loops)
 * @h: double pointer to the head node
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow;
	listint_t *fast;
	listint_t *loop_start;
	listint_t *current;
	listint_t *temp;
	size_t count;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = *h;
	loop_start = NULL;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = *h;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			loop_start = slow;
			break;
		}
	}

	count = 0;
	current = *h;

	while (current != NULL)
	{
		if (current == loop_start)
		{
			free(current);
			count++;
			break;
		}
		temp = current;
		current = current->next;
		free(temp);
		count++;
	}

	*h = NULL;
	return (count);
}

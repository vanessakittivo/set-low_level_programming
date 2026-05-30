#include <stdlib.h>
#include "lists.h"

/**
 * get_loop_start - finds loop start node using Floyd's algorithm
 * @h: head of the list
 *
 * Return: loop start node or NULL
 */
static listint_t *get_loop_start(listint_t *h)
{
	listint_t *slow;
	listint_t *fast;

	slow = h;
	fast = h;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = h;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a listint_t list (safely handles loops)
 * @h: double pointer to the head node
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *loop_start;
	listint_t *current;
	listint_t *temp;
	size_t     count;
	int        seen_loop;

	if (h == NULL || *h == NULL)
		return (0);
	loop_start = get_loop_start(*h);
	current = *h;
	count = 0;
	seen_loop = 0;
	while (current != NULL)
	{
		if (current == loop_start)
		{
			if (seen_loop)
				break;
			seen_loop = 1;
		}
		temp = current;
		current = current->next;
		free(temp);
		count++;
	}
	*h = NULL;
	return (count);
}

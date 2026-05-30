#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list (safely handles loops)
 * @head: pointer to the head
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;

	if (head == NULL)
		return (0);

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		if (fast && fast->next)
			fast = fast->next->next;
		else
			fast = NULL;

		slow = slow->next;

		if (slow == fast && slow != NULL)
		{
		printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}
	}
	return (count);
}

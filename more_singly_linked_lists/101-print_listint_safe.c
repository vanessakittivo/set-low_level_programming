#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list (handles loops)
 * @head: pointer to the head node
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow;
	const listint_t *fast;
	const listint_t *loop_start;
	size_t count;

	if (head == NULL)
		return (0);

	slow = head;
	fast = head;
	loop_start = NULL;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
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
	while (head != NULL)
	{
		if (head == loop_start)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			count++;
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}
	return (count);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_loop_start - finds loop start node using Floyd's algorithm
 * @head: pointer to head node
 *
 * Return: pointer to loop start node, or NULL if no loop
 */
static const listint_t *get_loop_start(const listint_t *head)
{
	const listint_t *slow;
	const listint_t *fast;

	slow = head;
	fast = head;
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
			return (slow);
		}
	}
	return (NULL);
}

/**
 * print_listint_safe - prints a listint_t linked list (handles loops)
 * @head: pointer to the head node
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *loop_start;
	size_t           count;
	int              seen_loop;

	if (head == NULL)
		return (0);
	loop_start = get_loop_start(head);
	count = 0;
	seen_loop = 0;
	while (head != NULL)
	{
		if (head == loop_start)
		{
			if (seen_loop)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				count++;
				exit(98);
			}
			seen_loop = 1;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}
	return (count);
}

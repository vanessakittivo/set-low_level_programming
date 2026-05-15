#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node and returns its data
 * @head: double pointer to head of list
 *
 * Return: head node's data (n), or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
	return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}

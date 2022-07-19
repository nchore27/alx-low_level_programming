#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: This is my structures.
 * Return: The head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *phead;
	int result;

	if (*head == NULL)
		return (0);
	result = (*head)->n;
	phead = *head;
	*head = (*head)->next;
	free(phead);
	return (result);
}

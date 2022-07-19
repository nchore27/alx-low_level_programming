#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: This is my struct
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	while ((*head) != NULL)
	{
		listint_t *tmp;

		tmp = (*head);
		free(tmp);
		(*head) = (*head)->next;
	}
	(*head) = NULL;
}

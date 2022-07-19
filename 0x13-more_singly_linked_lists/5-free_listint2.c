#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: This is my struct
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	if (!head || *head == NULL)
		return;

	tmp1 = *head;
	while (tmp1 != NULL)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		free(tmp2);
	}
	*head = NULL;
}

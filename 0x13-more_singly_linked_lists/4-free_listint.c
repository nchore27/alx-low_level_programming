#include "lists.h"

/**
 * free_listint - a function that free nodes and list
 * @head: This is my struct
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

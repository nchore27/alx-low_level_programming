#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to pointer to linked list
 * @index: index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *tmp2;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	i = 0;
	while (tmp != NULL && i < (index - 1))
	{
		++i;
		tmp = tmp->next;
	}

	if (i != (index - 1) || tmp->next == NULL)
		return (-1);
	tmp2 = tmp->next;
	tmp->next = (tmp->next)->next;
	free(tmp2);
	return (1);
}

#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list.
 * @h: This is my structure entry
 * 
 * Return: The number of elements in a linked
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}

#include "main.h"
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: input pointer
 * @old_size: size of old ptr
 * @new_size: size of new ptr
 * Return: reallocated ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *z;
	unsigned int x, max = new_size;
	char *fz = ptr;

	if (ptr == NULL)
	{
		z = malloc(new_size);
		return (z);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	z = malloc(new_size);
	if (z == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (x = 0; x < max; ++x)
		z[x] = fz[x];
	free(ptr);
	return (z);
}

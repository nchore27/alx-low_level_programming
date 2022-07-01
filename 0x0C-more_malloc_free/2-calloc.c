#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - unction allocates memory for an array of nmemb
 * @nmemb: no of elements
 * @size: size of each number
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x, y;
	char *call;

	if (nmemb == 0 || size == 0)
		return (NULL);
	y = (nmemb * size);
	call = malloc(y);
	if (call == NULL)
		return (NULL);
	for (x = 0; x < y; ++x)
	{
		call[x] = 0;
	}
	return (call);
}

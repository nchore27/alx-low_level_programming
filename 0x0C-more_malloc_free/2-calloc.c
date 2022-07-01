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
	unsigned int x;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (x = 0; x < nmemb * size; ++x)
		*(memory + x) = 0;
	return ((void *)mem);
}

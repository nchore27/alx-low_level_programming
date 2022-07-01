#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: @b: number of bytes
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *fon;

	fon = malloc(b);
	if (fon == NULL)
	{
		exit(98);
	}
	return (fon);
}

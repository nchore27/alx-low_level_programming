#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting int
 * @max: max int
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int len, x;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (x = 0; x < len; x++)
		ptr[x] = min++;
	return (ptr);
}

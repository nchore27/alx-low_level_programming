#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **i, x, d;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	i = malloc(sizeof(int *) * height);
	/*incase the memory is insifficuent*/
	if (!i)
		return (NULL);
	d = 0;
	while (d < height)
	{
		*(i + d) = malloc(width * sizeof(int));

		if (!(*(i + d)))
		{
			while (--d)
				free(*(i + d));
			free(i);
			return (NULL);
		}
		x = 0;
		while (x < width)
		{
			*(*(i + d) + x) = 0;
			x++;
		}
		++d;
	}
	return (i);
}

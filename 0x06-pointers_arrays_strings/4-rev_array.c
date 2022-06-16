#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: Pointer a
 * @n: size of array
 * Return: int
 */

void reverse_array(int *a, int n)
{
	int x, tmp;

	x = 0;
	for (x = 0; x < n / 2; x++)
	{
		tmp = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = tmp;
	}
}

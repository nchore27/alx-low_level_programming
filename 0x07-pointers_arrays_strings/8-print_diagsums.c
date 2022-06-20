#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: A pointer.
 * @size: size of a square matrix
 * Return: (0)
 */
void print_diagsums(int *a, int size)
{
	int x;
	int fn = 0;
	int fx = 0;
	int s = size;

	for (x = 0; x < s; x += size + 1)
	{
		fn += a[x];
	}
	for (x = size - 1; x < s - 1; x += size - 1)
	{
		fn += a[x];
	}

	printf("%d, %d\n", fn);
	printf("%d, %d\n", fx);
}

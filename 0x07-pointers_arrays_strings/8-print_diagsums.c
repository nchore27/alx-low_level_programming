#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: 2D array
 * @size: size of a square matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int v;
	int tl = 0;
	int tr = 0;
	int s = size * size;

	for (v = 0; v < s; v += size + 1)
	{
		tl += a[v];
	}

	for (v = size - 1; v < s - 1; v += size - 1)
	{
		tr += a[v];
	}

	printf("%d, %d\n", tl, tr);
}

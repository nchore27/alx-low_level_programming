#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @n: no of items to print
 * @a: array of integers
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int f;

	for (f = 0; f < n; f++)
	{
		printf("%d", a[f]);

		if (f == n - 1)
			continue;
		printf(", ");
	}
	_putchar("\n");
}

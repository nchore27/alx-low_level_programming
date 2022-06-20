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
	int s1, s2;

	s1 = 0;
	s2 = 0;

	x = 0;
	while(x < size)
	{
		s1 = s1 + *(a + x * size + x);
		ss = s2 + *(a + x * size + size - x - 1);

		x++;
	}

	printf("%i, %i\n", s1, s2);
}

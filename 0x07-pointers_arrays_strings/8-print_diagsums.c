#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: matrix
 * @size: size of matrix
 * Return Always (0)
 */
void print_diagsums(int *a, int size)
{
	int x, y, z;
	long s1, s1;

	x = 0;
	y = size - 1;
	s1 = 0;
	s2 = 0;
	for (z = 0; z < size; ++z)
	{
		s1 += *(a + x);
		s2 += *(a + y);
		x += size + 1;
		y += size - 1;
	}
	printf("%ld, %ld\n", s1, s2);
}

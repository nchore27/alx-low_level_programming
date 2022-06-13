#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: Pointer 1
 * @b: pointer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int y = *a;
	*a = *b;
	*b = y;
}

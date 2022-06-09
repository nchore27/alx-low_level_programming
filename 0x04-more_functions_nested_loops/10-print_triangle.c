#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 * Return: Void.
 */

void print_triangle(int size)
{
	int x = 0, y = 0;

	for (x = 0; x < size; ++x)
	{
		for (y = 0; y < size - x - 1; ++y)
		{
			_putchar(' ');
		}
		for (y = size - x - 1	; y < size; ++y)
		{
			_putchar('#');
			if (y == size - 1 && x != size - 1)
				_putchar('\n');
		}
	}
	_putchar('\n');
}

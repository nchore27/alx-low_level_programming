#include "stdio.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: pointer.
 * Return: Always (0)
 */
void print_chessboard(char (*a)[8])
{
	unsigned int x = 0, y = 0;

	while (x < 8)
	{
		while (y < 8)
		{
			_putchar(a[x][y]);
			++y;
		}
		_putchar('\n');
		y = 0;
		++x;
	}

}

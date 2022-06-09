#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The number of \ characters to be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int ln, space;

	if (n > 0)
	{
		for (ln = 0; ln < n; ln++)
		{
			for (space = 0; space < ln; space++)
				_putchar(' ');
			_putchar('\\');

			if (ln == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

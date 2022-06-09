#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: the number of times the character should be printed
 * Return: 0
 */

void print_line(int n)
{
	int ln;

	if (n > 0)
	{
		for (ln = 0; ln < n; ln++)
			_putchar('_');
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * followed by a new line
 * _putchar: prints out the standard output
 * Return: void
 */

void print_numbers(void)
{
	int f = 0;

	for (f = 0; f < 10; f++)
	{
		_putchar(f + 48);
		_putchar('\n');
	}
}

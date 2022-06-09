#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * followed by a new line
 * _putchar: prints out the standard output
 * Return: void
 */

void print_numbers(void)
{
	int f;

	f = 0;
	while (f < 10)
	{
		_putchar (f + '0');
		f++;
	}

	_putchar ('\n');
}

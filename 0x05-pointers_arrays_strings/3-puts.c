#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	char *x;
	int a;

	x = str;

	for (a = 0; x[a]; a++)
	{
		_putchar (x[a]);
	}
	_putchar('\n');
}

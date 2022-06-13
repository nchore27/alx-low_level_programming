#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int h = 0;
	char *f;

	f = str;

	while (str[++h] != '\0')
	{
		_putchar(f[h]);
	}
	_putchar('\n');
}

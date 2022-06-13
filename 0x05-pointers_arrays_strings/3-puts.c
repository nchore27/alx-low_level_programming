#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int f = 0;

	while (str[f] != '\0')
	{
		_putchar(str[f]);
		f++;
	}

	_putchar('\n');
	return (0);
}

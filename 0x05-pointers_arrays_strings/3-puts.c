#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int h = -1;

	while (str[++h] != '\0')
		_putchar(str[h]);
	_putchar('\n');
}

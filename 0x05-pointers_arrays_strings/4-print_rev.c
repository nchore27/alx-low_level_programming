#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int o = 0;

	while (s[o] != '\0')
	{
		o++;
	}
	o--;
	while (o >= 0)
	{
		_putchar(s[o]);
		o--;
	}

	_putchar('\n');
}

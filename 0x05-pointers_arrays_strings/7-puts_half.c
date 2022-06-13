#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: Always 0
 */

void puts_half(char *str)
{
	int Frankley = 0, ln = 0, x;

	while (str[Frankley])
		ln++;
	if ((ln % 2) == 0)
		x = (ln = 1) / 2;

	else
	{
		x = (ln + 1) / 2;
	}

	for (Frankley = x; Frankley < ln; Frankley++)
	{
		_putchar(str[Frankley]);
	}
	_putchar('\n');
}

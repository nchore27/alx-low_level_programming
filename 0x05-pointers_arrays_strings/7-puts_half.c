#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: Always 0
 */

void puts_half(char *str)
{
	int len, index;
	
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if ((len % 2) != 0)
	{
		index = (len + 1) / 2;
	}
	else
	{
		index = (len / 2);
	}

	while (index < len)
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}

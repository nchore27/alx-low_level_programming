#include "main.h"

/**
 * print_last_digit- prints the last digit of a number
 * @q: the int
 * Return: value of the last digit
 */
int print_last_digit(int q)
{
	int last;

	last = q % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

#include "main.h"

/**
 * times_table-  function that prints the 9 times table
 * Return: Always 0
 */
void times_table(void)
{
	int a, b;

	a = 0;

	while (a < 24)
	{
		b = 0;

		while (b < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		a++;
	}
}

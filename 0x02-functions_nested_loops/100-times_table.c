#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: the number
 * Return: 0
 */
void print_times_table(int n)
{
	int d, e, f;

	if (n >= 0 || n <= 14)
	{
		for (d = 0; d <= n; d++)
		{
			for (e = 0; e <= n; e++)
			{
				f = d * e;
				if (f > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((f / 100) + '0');
					_putchar(((f / 10) % 10) + '0');
					_putchar((f % 10) + '0');
				}
				else if (f > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((f / 10) % 10) + '0');
					_putchar((f % 10) + '0');
				}
				else
				{
					if (e != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(f + '0');
				}
			}
			_putchar('\n');
		}
	}
}

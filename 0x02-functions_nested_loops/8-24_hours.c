#include "main.h"

/**
 * jack_bauer- prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 * Return: ...
 */
void jack_bauer(void)
{
	int w, x;

	w = 0;

	while (w < 24)
	{
		x = 0;

		while (x < 60)
		{
			_putchar((w / 10) + '0');
			_putchar((w % 10) + '0');
			_putchar(':');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar('\n');
			x++;
		}
		w++;
	}
}

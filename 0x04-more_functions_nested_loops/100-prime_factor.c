#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number
 * Return: 0
 */

int main(void)
{
	unsigned long int l = 612852475143;
	unsigned long int div = 2, Factor_max;

	while (l != 0)
	{
		if (l % div != 0)
			div = div + 1;
		else
		{
			Factor_max = l;
			l = l / div;
			if (l == 1)
			{
				printf("%lu\n", Factor_max);
				break;
			}
		}
	}
	return (0);
}

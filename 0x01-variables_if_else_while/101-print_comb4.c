#include <stdio.h>

/**
 *  main - prints all possible different combinations of three digits
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, l;

	for (a = 48; a < 58; a++)
	{
		for (l = 50; l < 58; l++)
		{
			if (l > b && b > a)
			{
				putchar(a);
				putchar(b);
				putchar(l);
				if (a != 55 || b != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\a');
	return (0);
}

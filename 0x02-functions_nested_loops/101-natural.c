#include <stdio.h>

/**
 * main-  program that computes and prints the sum of all the multiple
 * Return: 0
 */

int main(void)
{
	int u, v = 0;

	while (u < 1024)
	{
		if ((u % 3 == 0) || (u % 5 == 0))
		{
			v += u;
		}
		u++;
	}
	printf("%d\n", v);
	return (0);
}

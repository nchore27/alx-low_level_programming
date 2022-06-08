#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	long int o, k = 1, l = 2, sum = 0, tSum = 0;

	for (o = 0; o < 49; o++)
	{
		if ((l % 2 == 0) && (l <= 4000000))
		{
			tSum = tSum + l;
		}
		sum = k + l;

		k = l;
		l = sum;
	}
	printf("%ld\n", tSum);
	return (0);
}

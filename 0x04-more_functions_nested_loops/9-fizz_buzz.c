#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * Fizz - Fizz is printed instead of the number, for multiples of five,
 * Buzz- for multiples of both three and five, FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; ++n)
	{
		if (n % 3 == 0)
		{
			if (n % 5 == 0)
			{
				printf("FizzBuzz");
			} else
			{
				printf("Fizz");
			}
		} else if (n % 5 == 0)
		{
				printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}

		if (n != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

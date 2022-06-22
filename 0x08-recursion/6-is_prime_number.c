#include "main.h"
/**
 * _div - checks if int is divisible
 * @d: the divisor
 * @i: number to check
 * Return: 0
 */

int _div(int i, int d)
{
	if (i % d == 0)
	{
		return (1);
	}
	return (_div(i, d + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number
 * Return: 1
 */

int is_prime_number(int n)
{
	int x;

	x = 2;
	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (_div(n, x));
}

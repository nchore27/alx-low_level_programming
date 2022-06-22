#include "main.h"
/**
 * _sqrt - square root of a number
 * @m: the number to find the root of
 * @r: to be tested
 * Return: square root.
 */

int _sqrt(int m, int r)
{
	if ((r * r) == m)
	{
		return (r);
	}
	if (r == m / 2)
	{
		return (-1);
	}
	return (_sqrt(m, r + 1));
}

#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	int x;

	x = 0;
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt(n, x));
}

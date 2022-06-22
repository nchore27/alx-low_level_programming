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
	return (_sqrt(n, r));
}

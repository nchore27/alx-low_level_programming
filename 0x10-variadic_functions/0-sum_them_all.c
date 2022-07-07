#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return:sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum;
	va_list alist;

	if (!n)
	{
		return (0);
	}

	x = 0;
	sum = 0;
	va_start(alist, n);
	while (x < n)
	{
		sum += va_arg(alist, int);
		++x;
	}
	va_end(alist);

	return (sum);
}

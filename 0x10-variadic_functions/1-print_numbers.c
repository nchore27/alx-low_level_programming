#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list alist;

	x = 0;

	va_start(alist, n);
	while (x < n)
	{
		printf("%d", va_arg(alist, int));
		++x;
		if (separator && x < n)
			printf("%s", separator);
	}
	puts("");
	va_end(alist);
}

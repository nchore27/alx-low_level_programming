#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list alist;
	char *y;

	x = 0;
	va_start(alist, n);
	while (x < n)
	{
		y = va_arg(alist, char *);
		printf("%s", (!y ? "(nil)" : y));
		++x;
		if (separator && x < n)
			printf("%s", separator);
	}
	puts("");
	va_end(alist);
}

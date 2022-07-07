#include "variadic_functions.h"
/**
 * print_ci - prints va if it is a char or an int
 * @v: va_list
 * @s: format for printf
 * Return: Always 0.
 */
void print_ci(va_list v, char *s)
{
	printf(s, va_arg(v, int));
}

/**
 * print_d - prints va if it is a float
 * @v: va_list
 * @s: format for printf
 * Return: Always 0.
 */
void print_d(va_list v, char *s)
{
	printf(s, va_arg(v, double));
}

/**
 * print_s - prints va if it is a char *
 * @v: va_list
 * @s: format for printf
 * Return: Always 0.
 */
void print_s(va_list v, char *s)
{
	char *fon;

	fon = va_arg(v, char *);
	if (!fon)
		fon = "(nil)";
	printf(s, fon);
}

/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int x, y;
	char *fon;
	va_list alist;

	fs array[] = {{print_ci, "%c", 'c'},
		{print_d, "%f", 'f'},
		{print_ci, "%i", 'i'},
		{print_s, "%s", 's'},
	};

	va_start(alist, format);
	y = 0;
	fon = "";
	while (format && *(format + y))
	{
		x = 0;
		while (x < 4)
		{
			if (*(format + y) == array[x].def)
			{
				printf("%s", fon);
				array[x].mat(alist, array[x].s);
				fon = ", ";
			}
			++x;
		}
		++y;
	}
	va_end(alist);
	puts("");


#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	unsigned int x = 0;
	char *str, *sep = "";
	va_list arguments;

	va_start(arguments, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sep, va_arg(arguments, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(arguments, int));
					break;
				case 's':
					str = va_arg(arguments, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					++x;
					continue;
			}
			sep = ", ";
			++x;
		}
	}
	printf("\n");
	va_end(arguments);
}

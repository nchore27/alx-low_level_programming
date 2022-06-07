#include <unistd.h>
#include <stdio.h>

/**
 * Main - Write a program that prints _putchar, followed by a new line.
 * Return: 0
 */

int _putchar(char)
{
	char x[] = "putchar";

	printf("_%s\n", x);
	return (0);
}

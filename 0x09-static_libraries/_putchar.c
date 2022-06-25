#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * description - Write a program that prints _putchar, followed by a new line.
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

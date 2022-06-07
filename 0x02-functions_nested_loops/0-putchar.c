#include <stdio.h>
#include "main.h"

/**
 * Main - Entry point
 *
 * Description - Write a program that prints _putchar, followed by a new line.
 * 
 * Return: 0
 */

int main(void)

{
	char t[] = "_putchar";
	int x = 0;

	for (x = 0; x < 8; x++)
	{
		_putchar(t[x]);
	}
	_putchar('\n');
	return (0);
}


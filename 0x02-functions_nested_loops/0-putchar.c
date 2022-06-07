#include <stdio.h>

/**
 * Main - Entry point
 * Description - Write a program that prints _putchar, followed by a new line.
 * Return: 0
 */

int main(void)

{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		fputchar(text[i]);
	}
	fputchar('\n');
	return (0);
}


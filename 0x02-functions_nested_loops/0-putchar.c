#include <stdio.h>

/**
 * Main - Entry point
 * Description - Write a program that prints _putchar, followed by a new line.
 * Return: 0
 */

int main(void)

{
	char text[9] = "_putchar";
	int x = 0;

	for (x = 0; x < 8; x++)
	{
		putchar(text[x]);
	}
	putchar('\n');
	return (0);
}


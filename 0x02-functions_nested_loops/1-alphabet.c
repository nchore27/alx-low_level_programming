#include "main.h"

/**
 * print_alphabet - print a to z
 *
 * Description - function that prints the alphabet followed by a new line.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}

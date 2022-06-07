#include "main.h"

/**
 * Main - Print alphabets
 *
 * Description - Write a function that prints the alphabet, in lowercase, followed by a new line.
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

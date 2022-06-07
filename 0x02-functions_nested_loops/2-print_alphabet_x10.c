#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alph;
	int t = 0;

	while (t <= 9)
	{
		for(alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
		t++;
	}
}

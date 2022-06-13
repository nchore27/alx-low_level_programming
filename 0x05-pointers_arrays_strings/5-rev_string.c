#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string.
 * @s: pointer to a string
 * Return: 0
 */

void rev_string(char *s)
{
	int ln = _strlen(s), x;
	char *rev = s;
	char tmp;

	while (*(rev++) != '\0')
		continue;
	rev = rev - 2;
	for (x = 0; x < ln / 2; ++x)
	{
		tmp = s[x];
		s[x] = rev[0];
		rev[0] = tmp;
		rev--;
	}
}
/**
 * _strlen - function that that prints the length of a string.
 * @s: pointer to a string.
 * Return: length of string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

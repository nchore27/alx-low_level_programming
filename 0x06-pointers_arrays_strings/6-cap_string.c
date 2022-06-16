#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @c - pointer
 * Return: always 0
 */

char *cap_string(char *c)
{
	int x, y;

	x = 0;
	char cap[] = ";.!?\"()\t{}\n ";
	int ln = _strlen(c);

	if (c[x] >= 97 && c[x] <= 122)
	{
		c[x] -= 32;
	}
	for (x = 0; x < ln; ++x)
	{
		for (y = 0; y <  _strlen(cap); ++y)
		{
			if (c[x] == cap[y] && c[x + 1] >= 97 && c[x + 1] <= 122)
			{
				c[x + 1] -= 32;
			}
		}
	}
	return (c);
}
/**
 * _strlen - function that that returns the length of a string
 * @s : pointer to a string.
 * Return: Length
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
		++x;
	return (x);
}

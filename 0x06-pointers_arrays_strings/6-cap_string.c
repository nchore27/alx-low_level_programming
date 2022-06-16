#include "main.h"
#include <stdio.h>
/**
 * cap_string - function that capitalizes all words of a string
 * @c - pointer
 * Return: c
 */
char *cap_string(char *c)
{
	int x;

	x = 0;
	if (c[0] >= 'a' && c[0] <= 'z')
	{
		c[0] = c[0] - 32;
	}
	for (x = 0; c[x] != '\0'; ++x)
	{
		switch (c[x])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (c[x + 1] > 96 && c[x + 1] < 123)
				{
					c[x + 1] = c[x + 1] - 32;
				}
		}
	}
	return (c);
}

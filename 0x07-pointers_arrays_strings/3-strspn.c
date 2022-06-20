#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: has bytes from accept.
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, y, c = 0, tmp = 0;

	for (x = 0; s[x] != '\0'; ++x)
	{
		tmp = c;
		for (y = 0; accept[y] != '\0'; ++y)
		{
			if (accept[y] == s[x])
			{
				c++:
			}
		}
		if (c == tmp)
		{
			return (c);
		}
	}
	return (c);
}

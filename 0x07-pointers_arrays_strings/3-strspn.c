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
	unsigned int x, y, count, tmp;

	x = 0;
	count = 0;
	tmp = 0;
	for (x = 0; s[x] != '\0'; ++x)
	{
		tmp = count;
		for (y = 0; accept[y] != '\0'; ++y)
		{
			if (accept[y] == s[x])
			{
				count++:
			}
		}
		if (count == tmp)
		{
			return (count);
		}
	}
}

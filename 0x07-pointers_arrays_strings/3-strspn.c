#include "main.h"

/**
 * int _strspn - function that gets the length of substring
 * @s: the string
 * @accept: has bytes from accept
 * Return: no of bytes from initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;
	char fn, fx;

	fx = 0;
	for (x = 0; *(s + 1) != '\0';)
	{
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				fn = 0;
				fx = 1;
				break;
			}
			else
			{
				fn = 1;
			}
		}
		if (!fn)
			++x;
		else
			break;
	}
	return (fx ? x : 0);
}

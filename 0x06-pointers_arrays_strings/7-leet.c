#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337
 * @n: pointer to array
 * Return: leet
 */

char *leet(char *n)
{
	int x = 0, y;
	char c1[] = {'a', 'e', 'o', 't', 'l'};
	char c2[] = {'4', '3', '0', '7', '1'};

	while (n[x] != '\0')
	{
		for (y = 0; c1[y] != '\0'; y++)
		{
			if (n[x] == c1[y] || n[x] == c1[y] - 32)
			{
				n[x] = c2[y];
			}
		}
		++x;
	}
	return (n);
}

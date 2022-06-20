#include "main.h"

/**
 * int _strspn - function that gets the length of substring
 * @s: the string
 * @accept: has bytes from accept
 * Return: no of bytes from initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	unsigned int len;

	len = 0;
	for ( x = 0; s[x] != '\0'; ++x)
	{
		for (y = 0; accept[y] != '\0' && accept[y] != s[x]; ++y);
		if (s[x] == accept[y])
			len++;
		if (accept[y] == '\0')
			return (len);
	}
	return (len);
}

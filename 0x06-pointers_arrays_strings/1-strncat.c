#include "main.h"

/**
 * _strncat - function is similar to the _strcat function
 * @n: value
 * @dest: Pointer to a string
 * @src: Pointer to a string
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

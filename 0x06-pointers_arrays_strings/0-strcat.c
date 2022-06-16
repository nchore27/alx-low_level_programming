#include "main.h"

/**
 * function appends the src string to the dest string
 * _strcat - function appends the src string to the dest string
 * @dest: Pointer
 * @src: Pointer
 * REturn: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

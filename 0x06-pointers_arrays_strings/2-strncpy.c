#include "main.h"

/**
 * _strncpy - function that copies a string
 * @n: input value
 * @src: pointer to a string
 * @dest: pointer to a string
 * Return: Always 0
 */
 
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

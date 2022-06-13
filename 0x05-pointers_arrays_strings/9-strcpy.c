#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function that copies the string pointed to by src
 * src: string pointer
 * dest: buffer pointer
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int ln = _strlen(src);
	int x;

	for (x = 0; x < ln; ++x)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}

/**
 * _strlen - function that that prints the length of a string.
 * @s: string pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}


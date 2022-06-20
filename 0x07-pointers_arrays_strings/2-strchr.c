#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: a string
 * @c: character
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; *(s + x) != '\0' && *(s + x) != c; ++x)
	{
		continue;
	}
	return (*(s + x) == c ? s + x : 0);
}

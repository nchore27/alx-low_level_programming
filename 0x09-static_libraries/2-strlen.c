#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string
 * Return: Length of string.
 */

int _strlen(char *s)
{
	int ln = 0;

	while (s[ln] != '\0')
	{
		ln++;
	}

	return (ln);
}

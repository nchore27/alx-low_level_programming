#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function that that returns the length of a string.
 * @s: pointer
 * Return: - The length of a string.
 */
int _strlen(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: no of bytes
 * Return: Pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int f1, f2;
	unsigned int size, y, index = 0;
	char *str = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	f1 = _strlen(s1);
	f2 = _strlen(s2);
	if (n > l2)
		n = l2;
	size = f1 + n + 1;
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (y = 0; y < f1; ++y)
	{
		str[index] = s1[y];
		index++;
	}
	for (y = 0; y < n; ++y)
	{
		str[index] = s2[y];
		index++;
	}
	str[index] = '\0';
	return (str);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: This is the first input string
 * @s2: This is the second input string
 * @n: This is the limit to copy the second string to the first string
 * Return: if the function fails, it should return NULl
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y;
	char *String;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; ++x)
	{
	}
	for (y = 0; s2[y] != '\0'; ++y)
	{
	}
	if (n > y)
		n = y;
	String = malloc(((x + n) + 1));
	if (String == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; ++x)
	{
		String[x] = s1[x];
	}
	for (y = 0; y != n; ++y)
	{
		String[x] = s2[y];
		++x;
	}
	String[x] = '\0';
	return (String);
}

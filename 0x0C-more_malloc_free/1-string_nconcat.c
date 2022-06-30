#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: no of bytes
 * Return: Pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ct;
	unsigned int len = y, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		++len;

	ct = malloc(sizeof(char) * (len + 1));

	if (ct == NULL)
		return (NULL);

	len = 0;
	for (index = 0; s1[index]; ++index)
	{
		ct[++len] = s1[index];
	}

	for (x = 0; s2[x] && index < y; ++index)
	{
		ct[len++] = s2[index];
	}
	ct[len] = '\0';
	return (ct);
}

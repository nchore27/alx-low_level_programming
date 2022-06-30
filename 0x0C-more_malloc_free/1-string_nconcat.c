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
	unsigned int x;
	unsigned int n;
	char *str;

	s1 = s1 != NULL ? s1 : "";
	s2 = s2 != NULL ? s2 : "";
	n = 0;
	for (n = 0; *(s1 + n) != '\0'; ++n)
	{
		continue;
	}
	for (x = 0; *(s2 + x) != '\0' && x < n; ++x)
		++n;
	str = malloc(sizeof(char) * (n + 1));
	if (str != NULL)
	{
		for (n = 0; *(s1 + n) != '\0'; n++)
			*(str + n) = *(s1 + n);
		for (x = 0; x < n && *(s2 + x) != '\0'; ++x)
		{
			*(str + n) = *(s2 + x);
			++n;
		}
		*(str + n) = '\0';
		return (str);
	}
	return (NULL);
}

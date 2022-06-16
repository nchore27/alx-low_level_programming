#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase
 * @s: Pointer to a string
 * Return: 0
 */

char *string_toupper(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
		a++;
	}
	return (s);
}

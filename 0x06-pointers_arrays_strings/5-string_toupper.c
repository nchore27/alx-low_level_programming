#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase
 * @s: Pointer to a string
 * Return: 0
 */

char *string_toupper(char *s)
{
	char *ptr = s;

	while (*s)
	{
		if (*f >= 97 && *f <= 122)
			*s -= 32;
		s++;
	}
	return (ptr);
}

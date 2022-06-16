#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase
 * @f: Pointer to a string
 * Return: 0
 */

char *string_toupper(char *f)
{
	char *str = f;

	while (*f)
	{
		if (*f >= 97 && *f <= 122)
		{
			*f -= 32;
			f++;
		}
	}
	return (str);
}

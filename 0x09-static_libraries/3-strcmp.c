#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 TRUE, 0 FALSE
 */

int _strcmp(char *s1, char *s2)
{
	int fn;

	fn = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			fn = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (fn);
}

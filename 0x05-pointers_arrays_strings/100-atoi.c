#include "main.h"
#include <stdio.h>

/**
 * _atoi -  function that convert a string to an integer.
 * @s: a string
 * Return: Always 0
 */

int _atoi(char *s)
{
	int in = 1;
	unsigned int f = 0;

	do 
	{
		if (*s == '-')
			in *= -1;
		else if (*s >= '0' && *s <= '9')
			f = (f * 10) + (*s - '0');

		else if (f > 0)
			break;
	}
	while (*s++);

	return (f *in);
}

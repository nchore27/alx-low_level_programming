#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in memory
 * @str: array
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	int x = 0, len = 0;
	char *y;

	if (str == NULL)
	{
		if (str == NULL)
	}
	while (str[len] != '\0')
		++len;
	++len;
	y = malloc(len * sizeof(char));
	if (y == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; x <= len ; ++x)
	{
		y[x] = str[x];
	}
	return (y);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: string 
 * @s2: string
 * Return: NULL on Failure
 */
char *str_concat(char *s1, char *s2)
{
	int n1 = 0, n2 = 0, x = 0;
	char *y = NULL;

	if (s1 == NULL)
		n1 = 0;
	else
	{
		while (s1[n1] != '\0')
			++n1;
	}
	if (s2 == NULL)
		n2 = 0;
	else
	{
		while (s2[n2] != '\0')
			n2++;
	}
	y = malloc((n1 + n2 + 1) * sizeof(char));
	if (y == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; x < n1 ; x++)
	{
		y[x + n1] = s2[x];
	}
	y[n1 + n2] = '\0';
	return (y);
}

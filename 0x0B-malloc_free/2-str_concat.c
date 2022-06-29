#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s)
	{
		++s;
		++l;
	}
	return (l);
}

/**
 * str_concat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: NULL on Failure
 */
char *str_concat(char *s1, char *s2)
{
	char *t, *_t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	t = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 1);
	if (!t)
		return (NULL);
	_t = t;
	while (*s1)
	{
		*_t = *s1;
		_t++;
		s1++;
	}
	while (*s2)
	{
		*_t = *s2;
		_t++;
		s2++;
	}
	*_t = '\0';
	return (t);
}

#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: a string
 * @needle: a substring
 * Return: A pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *l = needle;
	char *s = haystack;
	while (*s)
	{
		l = needle;
		s = haystack;
		while (*l)
		{
			if (*s == *l)
			{
				++s;
				++l;
			}
			else
			{
				break;
			}
		}
		if (*l == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}

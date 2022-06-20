#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: a string.
 * @needle: a substring.
 * Return:  A pointer
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int x, y;

	for (x = 0; *(haystack +1) != '\0'; ++x)
	{
		for (y = 0; *(needle + y) != '\0' && *(needle + y) == *(haystack + x + y);)
			++j;
		if (*(needle + y) == '\0')
			return (haystack + 1);
	}
	return (*(needle + y) == '\0' ? haystack + x : 0);
}

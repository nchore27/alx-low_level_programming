#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - unction allocates memory for an array of nmemb
 * @nmemb: no of elements
 * @size: size of each number
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void fon;

	if (!nmemb || !size)
	{
		return (NULL);
	}
	fon = malloc(size * nmemb);
	if (!fon)
		return (NULL);
	_memset(fon, 0, size * nmemb);
	return (fon);
}

/**
 * _memset - fills memory with a constant byte
 * @b: constant byte
 * @s: memory area
 * @n: bytes of the memory area
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *fon = s;

	while (n--)
		*s++ = b;
	return (fon);
}

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

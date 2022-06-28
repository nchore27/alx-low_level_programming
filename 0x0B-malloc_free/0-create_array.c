#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars
 * @size: the size of array
 * @c: char
 * Return: pointer to array or
 * NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *str;

	str = malloc(sizeof(char) * size);
	if (!size || !str)
	{
		return (NULL);
	}
	for (x = 0; x < size; ++x)
	{
		str[x] = c;
	}
	return (str);
}

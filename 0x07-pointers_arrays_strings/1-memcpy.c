#include "main.h"

/**
 * _memcpy -  function that copies memory area
 * @dest: Memory area destination
 * @src: Memory area source
 * @n: Bytes to copy
 * Return: nothing
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}

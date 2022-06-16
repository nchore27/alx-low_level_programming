#include "main.h"

/**
 * rot13-function that encodes a string
 * @n: string to be encoded
 * Return: string
 */

char *rot13(char *n)
{
	int x, y;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (n[x] == a[y])
			{
				n[x] = b[y];
				break;
			}
		}
	}
	return (n);
}

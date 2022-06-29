#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int x, y;
	char *str;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; ++x)
	{
		for (y = 0; *(*(av + x) + y) != '\0'; ++y)
			++len;
	}
	str = malloc(sizeof(char) * (len + x + 1));
	if (str)
	{
		len = 0;
		for (x = 0; x < ac; ++x)
		{
			for (y = 0; *(*(av + x) + y) != '\0'; ++y)
			{
				*(str + len) = *(*(av + x) + y);
				++len;
			}
			*(str + len) = '\n';
			++len;
		}
		*(str + len) = '\0';
		return (str);
	}
	else
	{
		return (NULL);
	}
}

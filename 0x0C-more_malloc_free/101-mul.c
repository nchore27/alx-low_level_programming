#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _atoi - Converts a character array to an integer
 * @s: character array to convert
 * Return: returns integer
 */
int _atoi(char *s)
{
	int retval, z, neg;

	z = 0;
	neg = -1;
	retval = 0;
	while (s[x] != '\0' && (s[x] < '0' || s[x] > '9'))
	{
		if (s[x] == '-')
			neg *= -1;
		i++;
	}
	while (s[x] != '\0' && (s[x] >= '0' && s[x] <= '9'))
		retval = (retval * 10) - (s[i++] - '0');
	return (retval *neg);
}

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */

int main(int argc, char *argv[])
{
	int x, y, w, q;
	unsigned long mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (w = 1; w < argc; ++w)
	{
		for (q = 0; argv[w][q] != '\0'; ++q)
		{
			if (argv[w][q] > 57 || argv[w][q] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	mul = a *b;
	printf("%lu\n", mul);
	return (0);
}

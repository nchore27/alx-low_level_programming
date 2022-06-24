#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that multiplies two numbers.
 * @argc: The number of command line arguments.
 * @argv: argument vector of pointers to strings.
 * Return: always 0
 */

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that multiplies two numbers.
 * @argc: The number of command line arguments.
 * @argv: argument vector of pointers to strings.
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int x, y, j;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	j = x * c;
	printf("%d\n", j);
	return (0);
}

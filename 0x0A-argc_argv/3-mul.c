#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that multiplies two numbers.
 * @argc: The number of command line arguments.
 * @argv: Array containing the program command line arguments.
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int x, y, fon;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	fon = x *y;

	printf("%d\n", fon);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: The number of command line arguments.
 * @argv: array of argc
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

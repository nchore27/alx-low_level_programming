#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints all arguments it receives including the first one
 * @argc: The number of command-line arguments
 * @argv: argument vector of pointers to strings
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc > 0)
	{
		for (x = 0; x < argc; ++x)
		{
			printf("%s\n", argv[x]);
		}
	}
	return (0);
}

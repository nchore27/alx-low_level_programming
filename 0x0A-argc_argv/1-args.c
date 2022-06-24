#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the number of arguments passed into it.
 * @argc: number of arguments passed to the function
 * @argv: The command-line arguments
 * Return: 0 (always successfull)
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

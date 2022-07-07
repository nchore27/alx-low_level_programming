#include <stdlib.h>
#include <stdio.h>
/**
 * main - the main func
 * @ac: number of arguments
 * @av: will i use it ?
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int x, y;
	unsigned char *opcodes;

	if (ac != 2)
	{
		puts("Error");
		exit(1);
	}

	y = atoi(av[1]);
	if (y < 0)
	{
		puts("Error");
		exit(2);
	}

	opcodes = (unsigned char *) main;
	x = 0;
	while (x < y)
	{
		printf("%02x", *(opcodes + x));
		++x;
		if (x != y)
			putchar(' ');
		else
			puts("");
	}
	return (0);
}

#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - replace operators
 * @ac: number of arguments
 * @av: string of arguments
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int x, y;
	int (*op)(int, int);

	if (ac != 4)
	{
		puts("Error");
		exit(98);
	}

	op = get_op_func(av[2]);
	if (op == NULL)
	{
		puts("Error");
		exit(99);
	}
	
	x = atoi(av[1]);
	y = atoi(av[3]);
	if (y == 0 && (*(av[2]) == '/' || *(av[2]) == '%'))
	{
		puts("Error");
		exit(100);
	}
	printf("%d\n", op(x, y));
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - generates password for cracme
 * Return: 0
 */


int main(void)
{
	char argv[10], c[10];
	int i = 0, j = 0, k = 0;

	while (!k)
		k = strlen(argv);
	i = k;
	j = 0;
	argv[i] = k;
	while (i >= 0)
	{
		c[j] = argv[i] + i;
		i--;
		j++;
	}
	c[j] = 0;
	printf("%s\n", c);

	return (0);
}

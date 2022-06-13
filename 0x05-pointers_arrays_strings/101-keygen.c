#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 */
int main(void)
{
	int f;
	char x;

	srand(time(NULL));
	while (f <= 2645)
	{
		x = rand() % 128;
		f += x;
		putchar(x);
	}
	putchar(2772 - f);
	return (0);
}

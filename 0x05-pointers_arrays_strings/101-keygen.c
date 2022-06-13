#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 */
int main(void)
{
	int y = 0; 
	int x = 0;
	time_t t;

	srand((unsigned int) time(&t));

	while (x < 2772)
	{
		y = rand() % 62;
		if ((x + y) > 2772)
			break;
		x = x + y;
		printf("%c", y);
	}
	printf("%c\n", (2772 - x));
	return (0);
}

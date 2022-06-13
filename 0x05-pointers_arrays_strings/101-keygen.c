#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 */
int main(void)
{
	int y;

	srand(time(0));
	y = rand();
	printf("%i\n", y);
	
	return (0);
}

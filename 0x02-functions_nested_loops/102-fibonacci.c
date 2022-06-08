#include <stdio.h>
 /**
  * main- prints the first 50 Fibonacci numbers
  * starting with 1 and 2
  * Return: 0
  */
int main(void)
{
	long int p, q, r, next;

	q = 1;

	r = 2;

	for (p = 1; p <= 50; ++p)
	{
		if (q != 20365011074)
		{
			printf("%ld, ", q);
		}
		else
		{
			printf("%ld\n", q);
		}
		next = q + r;

		q = r;
		
		r = next;
	}
	return (0);
}

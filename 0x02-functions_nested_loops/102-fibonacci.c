#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *
 * Return: Always 0.
 */

int main(void)
{
	int m;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (m = 0 ; m < 50 ; m++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (m == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

#include <stdio.h>

/**
 * print_diagsums - prints sum oftwo diagonals of square matrix of ints.
 * @a: pointer to the first element of the matrix.
 * @size: size of the matrix.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - i - 1);
	}

	printf("%d, %d\n", sum1, sum2);
}

#include "main.h"

/**
 * _sqrt_recursion_helper - helper function for _sqrt_recursion.
 * @n: number to calculate square root of.
 * @i: test value for square root.
 *
 * Return: natural square root of n, or -1 if not found.
 */

int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion_helper(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number.
 * @n: number to calculate square root of.
 *
 * Return: natural square root of n, or -1 if not found.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_helper(n, 0));
}

#include "main.h"

/**
 * _abs - Function to get absolute value of a number
 *
 * @a: parameter to be checked
 *
 * Return: always a
 */


int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}

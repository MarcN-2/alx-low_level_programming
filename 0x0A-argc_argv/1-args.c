#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @a: number of arguments
 * @b: array of arguments
 *
 * Return: Always 0
 */

int main(int a, char *b[])
{
	(void) b; /*Ignore b*/
	printf("%d\n", a - 1);

	return (0);
}

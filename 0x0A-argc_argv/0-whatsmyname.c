#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc_1: number of arguments
 * @argv_2: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc_1 __attribute__((unused)), char *argv_2[])
{
	printf("%s\n", *argv_2);

	return (0);
}

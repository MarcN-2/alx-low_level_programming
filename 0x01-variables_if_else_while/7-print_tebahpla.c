#include <stdio.h>

/**
 * main - Prints alphabest in reverse
 *
 * Return: always o
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

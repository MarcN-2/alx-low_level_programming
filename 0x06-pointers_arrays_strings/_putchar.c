#include "main.h"
#include <unistd>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 if successful
 * On error, -1 is returned, and ermo is set appropriately.
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

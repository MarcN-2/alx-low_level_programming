#include <stdio.h>
#include "lists.h"

/**
 * print_lt - prints all the elements of a linked list
 * @f: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_lt(const list_t *f)
{
	size_t s = 0;

	while (f)
	{
		if (!f->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", f->len, f->str);
		f = f->next;
		s++;
	}

	return (s);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_list - displays all the elements of a linked list
 * @h: provides a pointer to the list_t list for printing
 * Return: number of nodes displayed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}

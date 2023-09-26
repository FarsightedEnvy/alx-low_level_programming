#include "lists.h"
#include <stdio.h>

/**
 * listint_len - provides the count of elements within a linked list
 * @h: traversing a linked list of type listint_len
 * Return: num of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}

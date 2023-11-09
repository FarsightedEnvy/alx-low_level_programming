#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *                            in a dlistint_t list.
 * @h: double ptr to the head of the list.
 * @idx: index where the new node should be added.
 * @n: int value for the new node.
 * Return: address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *t = *h;
	unsigned int c = 0;

	if (!new)
		return (NULL); /* Allocation failure, return NULL */
	new->n = n; /* Set the value of the new node */
	if (!idx)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (t)
	{
		if (c == idx - 1)
		{
			new->next = t->next;
			new->prev = t;
			if (t->next)
				t->next->prev = new;
			t->next = new;
			return (new);
		}
		t = t->next;
		c++;
	}
	free(new);
	return (NULL);
}

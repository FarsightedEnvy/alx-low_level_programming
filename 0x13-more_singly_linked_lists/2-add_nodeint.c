#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the start of a linked list
 * @head: ptr to the first node in the list
 * @n: data to put in that new node
 * Return: ptr to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

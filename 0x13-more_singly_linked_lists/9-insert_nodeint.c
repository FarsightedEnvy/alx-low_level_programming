#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - puts a new node in a linked list,
 * at a specific position
 * @head: ptr to the initial node in the list
 * @idx: position at which the new node is inserted
 * @n: data to put in the new node
 * Return: ptr to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (k = 0; temp && k < idx; k++)
	{
		if (k == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}

#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - memory deallocation for a linked list
 * @head: ptr to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

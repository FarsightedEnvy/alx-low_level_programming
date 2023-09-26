#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - removes node in linked list at specific index
 * @head: ptr to the initial element in the list
 * @index: index of the node to remove
 * Return: each time 1 (success), or -1 (fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (k < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		k++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

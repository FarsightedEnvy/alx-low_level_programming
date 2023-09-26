#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - removes the first node of a linked list
 * @head: ptr to the first element in the linked list
 * Return: the data inside the elements that was removed,
 * 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

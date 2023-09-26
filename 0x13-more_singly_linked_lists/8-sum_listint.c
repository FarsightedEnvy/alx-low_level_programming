#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - computes the total sum of data in a listint_t list
 * @head: initial node in the linked list
 * Return: sum obtained as a result
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

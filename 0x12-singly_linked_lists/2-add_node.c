#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the start of a linked list
 * @head: pointer to a pointer to the list_t list
 * @str: fresh str to insert into the node
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int l = 0;

	while (str[l])
		l++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->l = l;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

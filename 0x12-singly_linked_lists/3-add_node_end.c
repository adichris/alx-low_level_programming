#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a new node of a singly linked list.
 * @head: a listed list
 * @str: string characters
 *
 * Return: the address of the new element, or NULL  if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp_node; /* add a new node */
	unsigned int c = 0;

	if (str == NULL)
		return (NULL);
	while (str[c++]);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = --c;
	new_node->next = NULL; /* LAST NODE */

	/* if head is NULL, it is an empty linked list */
	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	tmp_node = *head;
	while (tmp_node->next)
		tmp_node = tmp_node->next;

	tmp_node->next = new_node; /* this point to new node */

	return (new_node);
}

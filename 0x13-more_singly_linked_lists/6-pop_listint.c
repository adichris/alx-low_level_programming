#include "lists.h"

/**
* pop_listint - adds a new node at the start linked list.
* @head: a linked list to print
*
* Return: the address of the new element, or NULL if it failed.
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp_node;
	int value = 0;

	if (*head == NULL)
		return (0);

	tmp_node = *head;
	*head = tmp_node->next;
	value = tmp_node->n;
	free(tmp_node);

	return (value);
}

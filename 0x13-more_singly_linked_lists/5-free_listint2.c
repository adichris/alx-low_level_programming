#include "lists.h"
/**
* free_listint2 - empty linked list
* @head: a linked list to print
*
* Return: void.
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp_node;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp_node = (*head)->next;
		free(*head);
		(*head) = tmp_node;
	}
}

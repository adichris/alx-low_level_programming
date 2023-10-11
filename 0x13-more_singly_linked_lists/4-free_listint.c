#include "lists.h"
/**
* free_listint - empty a singly linked list
* @head: a linked list to print
*
* Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *tmp_node;

	while (head)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node);
	}
}

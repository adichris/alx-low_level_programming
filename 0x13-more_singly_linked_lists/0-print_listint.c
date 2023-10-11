#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: list argument
 * Description: print all elements of singly linked list node structure
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t items = 0;

	while (h)
	{
		printf("%d\n", h->n);
		++items;
		h = h->next;
	}
	return (items);
}
